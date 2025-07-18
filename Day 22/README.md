
# Pipe Communication in C

This repository contains two C programs demonstrating **interprocess communication (IPC)** using **pipes**.

## Files

### 1. `code.c`
This program writes three messages to a pipe and reads them back.

#### Functionality:
- The parent process writes three strings into the pipe.
- Then, it reads them back and prints them.

#### Compilation and Execution:
```bash
gcc file_name.c -o file_name
./file_name
```

#### Sample Output:
```
Hello, world #1
Hello, world #2
Hello, world #3
```
<img width="959" alt="1" src="https://github.com/user-attachments/assets/e0917014-921f-401c-ae9d-c9bc78784302" />

---

### 2. `exercise.c`
This program demonstrates pipe communication between a parent and a child process.

#### Functionality:
- The parent process collects user input for:
  - Name
  - Registration Number
  - Age
- The parent sends this information to the child via a pipe.
- The child process reads the data from the pipe and prints it.

#### Compilation and Execution:
```bash
gcc file_name.c -o file_name
./file_name
```

#### Sample Interaction:
```
Enter name: Alice
Enter registration number: 2023CS1001
Enter age: 21

Child Process Output:
Name: Alice
Registration Number: 2023CS1001
Age: 21
```
<img width="959" alt="2" src="https://github.com/user-attachments/assets/63106454-a34e-40c6-8594-358a733ab0fe" />

---

## Requirements

- GCC Compiler
- Unix-like OS (Linux, macOS, WSL)

---
