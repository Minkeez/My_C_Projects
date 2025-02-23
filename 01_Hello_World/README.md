# C Program: Hello, World!
### Introduction
This repository contains a simple C program that prints **"Hello, World!"** to the console. The program is later modified to take user input and greet them with their name.

---

### Prerequisites

To compile and run the program, ensure you have a C compiler installed.

#### Windows (MinGW-w64)
1. Download and install **MinGW - Minimalist GNU for Windows** from [SourceForge](https://sourceforge.net/projects/mingw/).
2. Add MinGW's `bin` folder to your system `PATH`.
3. Verify installation:
  ```
  gcc --version
  ```

#### Mac (Xcode Command Line Tools)
```
xcode-select --install
```
Or install GCC via Homebrew:
```
brew install gcc
```

#### Linux (Ubuntu/Debian)
```
sudo apt update && sudo apt install build-essential
```

---

### Setting Up VS Code
1. Install [Visual Studio Code](https://code.visualstudio.com/).
2. Install the **C/C++ extension** from Microsoft in VS Code.
3. Open the terminal and navigate to the project directory.

---

### Program Files
- `hello.c`: Prints **"Hello, World!"**

---

### Compilation and Execution
#### Compile and Run `hello.c`
```
gcc hello.c -o hello
./hello
```