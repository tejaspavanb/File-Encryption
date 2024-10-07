# File Encryption Tool

## Overview

This project is a simple **Command-Line File Encryption and Decryption Tool** implemented in C++. It allows you to encrypt and decrypt text files using a **Caesar Cipher**, a simple substitution cipher. You can specify the file to encrypt or decrypt, the desired output file, and the key (shift value) for the cipher via command-line arguments.

This tool serves as an introduction to file handling, string manipulation, and basic encryption techniques in C++.

## Features
- **Encrypt** text files using a Caesar Cipher.
- **Decrypt** previously encrypted files using the same cipher and key.
- Simple and user-friendly command-line interface.

## How It Works

The **Caesar Cipher** is a type of substitution cipher where each letter in the input text is shifted by a certain number of positions in the alphabet. For example, with a key of 3, `A` becomes `D`, `B` becomes `E`, and so on.

The tool:
- **Encrypts** files by shifting characters forward by the given key value.
- **Decrypts** files by shifting characters backward by the same key value.

## Compilation

To compile the program, use the following command in a terminal or command prompt:

```bash
g++ -o encrypt encrypt.cpp
```

This will create an executable file named `encrypt`.

## Usage

The program requires 4 command-line arguments:
- **mode**: `-e` to encrypt or `-d` to decrypt.
- **input_file**: The name of the file you want to encrypt or decrypt.
- **output_file**: The name of the file where the result will be saved.
- **key**: The encryption key, which is the shift value for the Caesar Cipher.

### Example Commands

1. **Encrypt a file**:
   ```bash
   ./encrypt -e input.txt encrypted.txt 3
   ```
   This will encrypt the contents of `input.txt` using a Caesar Cipher with a key of 3 and save the result in `encrypted.txt`.

2. **Decrypt a file**:
   ```bash
   ./encrypt -d encrypted.txt decrypted.txt 3
   ```
   This will decrypt `encrypted.txt` using the same key of 3 and save the result in `decrypted.txt`.

## Error Handling

The program handles basic file I/O errors, such as:
- If the input file cannot be opened, it will print an error message:
  ```
  Error opening input file
  ```
- If the output file cannot be opened, it will print an error message:
  ```
  Error opening output file
  ```

If the number of arguments provided is incorrect, the program will print a usage guide:
```bash
Usage: ./encrypt <mode> <input_file> <output_file> <key>
Modes: -e to encrypt, -d to decrypt
```

## Potential Enhancements
- Support for binary file encryption.
- Implementation of more advanced encryption algorithms (e.g., XOR, Vigenère Cipher).
- Improved error handling for edge cases and non-text files.

## License

This project is licensed under the **MIT License**. Feel free to modify and use it as per your needs.

