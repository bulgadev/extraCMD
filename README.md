# Project Maker and Runner

This project contains two utilities: `maker.cpp` and `run.cpp`.

## maker.cpp
The `maker.cpp` program helps you create project templates for different technologies.

### Supported Options
- **cpp**: Creates a C++ project with a `main.cpp` file.
- **react**: Initializes a React project using `create-react-app`.
- **flask**: Clones a Flask template from GitHub.
- **electron**: Clones an Electron template from GitHub and installs dependencies.

### Usage
1. Compile the program:
   ```bash
   g++ maker.cpp -o maker
   ```
2. Run the program:
   ```bash
   ./maker
   ```
3. Follow the prompts to create your desired project.

---

## run.cpp
The `run.cpp` program compiles and runs a C++ file.

### Usage
1. Compile the program:
   ```bash
   g++ run.cpp -o run
   ```
2. Run the program with the name of the C++ file (without the `.cpp` extension):
   ```bash
   ./run <file_name>
   ```

For example, to compile and run `main.cpp`:
```bash
./run main
```

---

## Notes
- Ensure you have the necessary tools installed (e.g., `g++`, `npx`, `git`, `npm`).
- For React and Electron projects, Node.js must be installed.
