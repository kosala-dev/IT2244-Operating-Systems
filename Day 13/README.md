
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

---

### ✅ 02.c - Integer Printing

```c
int age = 23;
printf("%d", age);
```

---

### ✅ 03.c - Variable Assignment

```c
int first = 25;
int second = first;
```

---

### ✅ 04.c - Data Types and Sizes

```c
int age1 = 10;
double age2 = 12.45;
float age3 = 10.9f;
char letter = 'c';
```

Use of `sizeof()` to display memory usage.

---

### ✅ 05.c - Single User Input

```c
scanf("%d", &age);
scanf("%lf", &number);
scanf(" %c", &letter); 
```

---

### ✅ 06.c - Multiple Inputs

```c
scanf("%lf %c", &number, &alpha);
```

---

### ✅ 07.c - Simple Calculator

```c
scanf("%lf", &num1);
scanf("%lf", &num2);
printf("%2lf", num1 + num2); 
```

---

