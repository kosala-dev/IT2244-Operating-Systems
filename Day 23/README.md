
# Area Calculation Program Using IPC (Pipes)

This C program demonstrates **Interprocess Communication (IPC)** between a parent and child process using **pipes**. The program performs area calculations for various geometric shapes based on user input.

## Features

- Uses **two pipes** for **bidirectional communication** between parent and child.
- Calculates area for:
  - Circle
  - Triangle
  - Rectangle
  - Square
- Demonstrates process communication and coordination in C.

---

## Flow of Execution

1. **Parent Process**:
   - Prompts user to choose a shape and input relevant dimensions.
   - Sends the shape choice and dimensions to the child process via a pipe.
2. **Child Process**:
   - Receives the data from the parent.
   - Performs the area calculation.
   - Sends the result back to the parent.
3. **Parent Process**:
   - Receives the result and displays it.

---

## Compilation & Execution

```bash
gcc file_name.c -o file_name -lm
./file_name
```

---

## Sample Interaction

```
Choose Shape (1: Circle, 2: Triangle, 3: Rectangle, 4: Square, 5: Exit): 1
Enter radius: 7

Calculated Area: 153.94
```

```
Choose Shape (1: Circle, 2: Triangle, 3: Rectangle, 4: Square, 5: Exit): 2
Enter base and height: 10 5

Calculated Area: 25.00
```
<img width="959" alt="Screenshot 2025-06-12 000505" src="https://github.com/user-attachments/assets/c34fd87d-586a-451c-ab73-b792e256459a" />

---

## Requirements

- GCC Compiler
- Unix-based system

---
