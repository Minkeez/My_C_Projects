# C Program: Command-Line Calculator  
### Introduction  
This repository contains a simple **command-line calculator** written in C. It allows users to perform basic arithmetic operations: **addition, subtraction, multiplication, and division**.

The calculator runs in a loop, allowing users to perform multiple calculations until they choose to exit.

---

### Features
- Supports operations: `+`, `-`, `*`, `/`
- Handles **division by zero** gracefully
- Prompts user-friendly inputs
- Allows **multiple calculations** in a single run

---

### Prerequisites

To compile and run the program, ensure you have a C compiler installed.

#### Windows (MinGW-w64)
1. Download and install **MinGW - Minimalist GNU for Windows** from [SourceForge](https://sourceforge.net/projects/mingw/).
2. Add MinGW's `bin` folder to your system `PATH`.
3. Verify installation:
    ```bash
    gcc --version
    ```

#### macOS (Xcode Command Line Tools)
```bash
xcode-select --install
```
Or install GCC via Homebrew:
```bash
brew install gcc
```
##### Linux (Ubuntu/Debian)
```bash
sudo apt update && sudo apt install build-essential
```

---

### Setting Up in VS Code
1. Install [Visual Studio Code](https://code.visualstudio.com/download).
2. Install the **C/C++ extension** from Microsoft.
3. Open the terminal and navigate to the project folder.

---

### Program Files
- main.c – Main calculator logic and program loop.

---

### How to Compile and Run
```bash
gcc main.c -o calculator
./calculator
```

---

### Sample Usage
```markdown
==========================
Welcome to Basic Calculator
==========================

Enter first number: 12
Enter operator (+, -, *, /): *
Enter second number: 3
Result = 36.00

Continue calculate? (y/n): y
...
```