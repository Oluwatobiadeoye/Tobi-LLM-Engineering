## Tobi LLM Engineering

A small collection of notebooks and colab exploring practical Large Language Model (LLM) workflows.

### What's in this repo
- `company-brochure.ipynb`: prompts and utilities to generate a company brochure with an LLM
- `email-summarizer.ipynb`: summarize emails or long text into actionable bullets

- `environment.yml`: reproducible Conda environment for all notebooks

## Prerequisites
- Anaconda (or Miniconda). Download from the official Anaconda site: [Anaconda Distribution](https://www.anaconda.com/download)
- Git (optional, if you prefer to clone via git)

## Environment setup (Anaconda/conda)
1) Install Anaconda
   - Download and install from the official page: [Anaconda Distribution](https://www.anaconda.com/download)
   - After installation, open a new terminal so `conda` is available

2) Get the project
   - Using git: `git clone <your-fork-or-repo-url>` then `cd Tobi-LLM-Engineering`
   - Or download the project as a ZIP and extract it, then open a terminal in the extracted folder

3) Create the Conda environment from `environment.yml`
   - Create: `conda env create -f environment.yml`
   - Activate: `conda activate llms`

4) Keep the environment up to date (optional)
   - `conda env update -f environment.yml --prune`

For more about managing environments, see the Conda docs: [Conda: Manage Environments](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html)

## Running the notebooks
- Start Jupyter Lab: `jupyter lab` (or `jupyter notebook` if you prefer)
- Open one of the notebooks:
  - `company-brochure.ipynb`
  - `email-summarizer.ipynb`
  - `llm-tutor.ipynb`
- In Jupyter, select the kernel that matches your Conda environment (Kernel → Change Kernel)
- Run cells top-to-bottom; adjust any configuration or variables as prompted in each notebook

### Tips
- If you see "conda: command not found", close and reopen your terminal after installing Anaconda
- If a package seems missing, run `conda env update -f environment.yml --prune` then restart the kernel
- If Jupyter cannot find your kernel, run the optional kernel registration step above

## Contributing
- Open an issue or submit a pull request with clear descriptions of changes or improvements
