## Tobi LLM Engineering

A small collection of notebooks and colab exploring practical Large Language Model (LLM) workflows.

### What's in this repo
- `company-brochure.ipynb`: prompts and utilities to generate a company brochure with an LLM
- `email-summarizer.ipynb`: summarize emails or long text into actionable bullets
- `code-commenter.ipynb`: generate code comments and documentation using an LLM
- `langchain-demo.ipynb`: LangChain basics and common patterns
- `langchain-plus-embeddings.ipynb`: vector embeddings and semantic search with LangChain
- `rag-demo.ipynb`: retrieval-augmented generation (RAG) pipeline
- `airline-assistant.ipynb`: multi-tool LLM assistant example
- And more practical LLM workflow examples

## Prerequisites
- Python 3.11 or higher
- `uv` package manager (or pip). Install `uv` from: [uv Installer](https://docs.astral.sh/uv/getting-started/)
- Git (optional, if you prefer to clone via git)

## Environment setup
1) Install uv
   - Download and install from the official page: [uv Installer](https://docs.astral.sh/uv/getting-started/)
   - Or install via pip: `pip install uv`

2) Get the project
   - Using git: `git clone <your-fork-or-repo-url>` then `cd Tobi-LLM-Engineering`
   - Or download the project as a ZIP and extract it, then open a terminal in the extracted folder

3) Create a virtual environment and install dependencies
   - `uv sync` (creates `.venv` and installs all dependencies from `pyproject.toml`)
   - Activate: `source .venv/bin/activate` (on macOS/Linux) or `.venv\Scripts\activate` (on Windows)

4) Keep dependencies up to date (optional)
   - `uv sync` (re-runs to update to latest compatible versions)

For more about `uv`, see the documentation: [uv Guide](https://docs.astral.sh/uv/)

## Running the notebooks
- Ensure your virtual environment is activated: `source .venv/bin/activate` (macOS/Linux) or `.venv\Scripts\activate` (Windows)
- Start Jupyter Lab: `jupyter lab` (or `jupyter notebook` if you prefer)
- Open any of the notebooks in the repo
- In Jupyter, select the Python kernel that matches your `.venv` environment (should appear as "Python 3.x" or "venv")
- Run cells top-to-bottom; adjust any configuration or variables as prompted in each notebook

### Tips
- If you see package import errors, make sure your virtual environment is activated
- If a package seems missing, run `uv sync` to ensure all dependencies are installed
- If Jupyter cannot find your kernel, try running `uv run ipython kernel install --user`

## Contributing
- Open an issue or submit a pull request with clear descriptions of changes or improvements
