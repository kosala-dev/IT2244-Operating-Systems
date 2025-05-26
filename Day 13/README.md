
## C Programming Basics - Examples and Usage Guide

---

## 📂 Files Included

| Filename | Description |
|----------|-------------|
| `01.c`   | Basic "Hello World" program |
| `02.c`   | Integer variable and format specifiers |
| `03.c`   | Variable assignment |
| `04.c`   | Data types and `sizeof` usage |
| `05.c`   | Single user input (int, double, char) |
| `06.c`   | Multiple user inputs in one line |
| `07.c`   | Simple calculator for arithmetic operations |

---

## 🧪 Compilation and Execution

To compile any C program:

```bash
gcc filename.c -o filename
./filename
```

> 📌 If you're using PuTTY or a remote terminal, make sure you have execution permissions and `gcc` is installed.

---

## 🔤 Format Specifiers

| Format | Description        |
|--------|--------------------|
| `%d` / `%i` | Integer       |
| `%f`        | Float         |
| `%lf`       | Double        |
| `%c`        | Character     |
| `%s`        | String        |

---

## 📘 Program Descriptions

### ✅ 01.c - Hello World

```c
#include <stdio.h>
int main() {
  printf("Hello World!");
  return 0;
}
```
<img width="959" alt="1" src="https://github.com/user-attachments/assets/90b2be59-0ff8-46bb-95a8-598eb284a68c" />

---

### ✅ 02.c - Integer Printing

```c
int age = 23;
printf("%d", age);
```
<img width="959" alt="2" src="https://github.com/user-attachments/assets/2f0347ed-e23a-45f9-a799-94629edd3151" />

---

### ✅ 03.c - Variable Assignment

```c
int first = 25;
int second = first;
```
<img width="959" alt="3" src="https://github.com/user-attachments/assets/94448867-8aa2-44d3-990a-e42db089db85" />

---

### ✅ 04.c - Data Types and Sizes

```c
int age1 = 10;
double age2 = 12.45;
float age3 = 10.9f;
char letter = 'c';
```
<img width="959" alt="4" src="https://github.com/user-attachments/assets/bb19a3a6-7e9e-44b9-81d2-ad980f0423b3" />

---

### ✅ 05.c - Single User Input

```c
scanf("%d", &age);
scanf("%lf", &number);
scanf(" %c", &letter); 
```
<img width="959" alt="5" src="https://github.com/user-attachments/assets/5bacfaad-9341-416b-8143-dd4cd534e461" />

---

### ✅ 06.c - Multiple Inputs

```c
scanf("%lf %c", &number, &alpha);
```
<img width="959" alt="6" src="https://github.com/user-attachments/assets/7f59508d-cafa-4cd8-a3d4-000622e15be2" />

---

### ✅ 07.c - Simple Calculator

```c
scanf("%lf", &num1);
scanf("%lf", &num2);
printf("%2lf", num1 + num2); 
```
<img width="959" alt="7" src="https://github.com/user-attachments/assets/5afcf6ef-4564-449c-a1ee-1ffce81d30ef" />

---

