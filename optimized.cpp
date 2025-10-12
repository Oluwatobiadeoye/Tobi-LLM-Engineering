#include <iostream>
#include <vector>
#include <limits>   // For std::numeric_limits
#include <chrono>   // For std::chrono
#include <iomanip>  // For std::fixed, std::setprecision
#include <cstdint>  // For uint32_t

// Linear Congruential Generator (LCG)
uint32_t lcg_next(uint32_t& seed) {
    // a=1664525, c=1013904223, m=2^32
    // uint32_t arithmetic naturally handles modulo 2^32
    const uint32_t a = 1664525;
    const uint32_t c = 1013904223;
    seed = (a * seed + c);
    return seed;
}

// Calculates the maximum subarray sum for a given set of random numbers
long long max_subarray_sum(int n, uint32_t seed_val, int min_val, int max_val) {
    std::vector<int> random_numbers(n);
    uint32_t current_lcg_seed = seed_val;

    int range_size = max_val - min_val + 1;

    // Generate random numbers
    for (int i = 0; i < n; ++i) {
        lcg_next(current_lcg_seed);
        // Map LCG output to the desired range [min_val, max_val]
        random_numbers[i] = static_cast<int>((current_lcg_seed % range_size) + min_val);
    }

    long long max_sum = std::numeric_limits<long long>::min();

    // Calculate maximum subarray sum (O(N^2) brute force as per Python)
    for (int i = 0; i < n; ++i) {
        long long current_sum = 0;
        for (int j = i; j < n; ++j) {
            current_sum += random_numbers[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }
    return max_sum;
}

// Calculates the total maximum subarray sum over multiple runs
long long total_max_subarray_sum(int n, uint32_t initial_seed, int min_val, int max_val) {
    long long total_sum = 0;
    uint32_t current_lcg_seed = initial_seed;

    // Perform 20 runs, each with a new seed derived from the main LCG
    for (int _ = 0; _ < 20; ++_) {
        lcg_next(current_lcg_seed);
        uint32_t seed_for_run = current_lcg_seed;
        total_sum += max_subarray_sum(n, seed_for_run, min_val, max_val);
    }
    return total_sum;
}

int main() {
    // Parameters
    int n = 10000;
    uint32_t initial_seed = 42;
    int min_val = -10;
    int max_val = 10;

    // Timing the function
    auto start_time = std::chrono::high_resolution_clock::now();
    long long result = total_max_subarray_sum(n, initial_seed, min_val, max_val);
    auto end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end_time - start_time;

    std::cout << "Total Maximum Subarray Sum (20 runs): " << result << std::endl;
    std::cout << "Execution Time: " << std::fixed << std::setprecision(6) << duration.count() << " seconds" << std::endl;

    return 0;
}
