# README.md

# Lexer Project

This project implements a simple lexer for tokenizing input strings. It includes the `Lexer` class responsible for processing input and generating tokens, as well as the `Token` class representing individual tokens.

## Project Structure

```
lexer-project
├── src
│   ├── lexer.h        # Declaration of the Lexer class
│   ├── lexer.cpp      # Implementation of the Lexer class
│   ├── token.h        # Definition of the Token class
│   └── token.cpp      # Implementation of the Token class
├── test
│   ├── test_lexer.cpp # Unit tests for the Lexer class
│   └── test_token.cpp # Unit tests for the Token class
├── CMakeLists.txt     # CMake configuration file
├── .gitignore          # Git ignore file
└── README.md           # Project documentation
```

## Building the Project

To build the project, use CMake:

1. Create a build directory:
   ```
   mkdir build
   cd build
   ```

2. Run CMake:
   ```
   cmake ..
   ```

3. Build the project:
   ```
   make
   ```

## Usage

After building the project, you can use the lexer by including the `lexer.h` header in your source files. The `Lexer` class provides methods to tokenize input strings.

## Running Tests

To run the unit tests, ensure you have built the project and then execute the test binaries located in the build directory.