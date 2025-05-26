
# C Programming Examples - Control Structures and More

---

## 📂 Programs Included

### 01.c - If-Else Condition: Voting Eligibility
```c
// Enter your age and verify eligibility for voting using if else
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    if( age >= 18){
        printf("\nYou are eligible for voting\n");
    } else if( age < 0) {
        printf("\nInvalid age\n");
    } else {
        printf("\nYou are not eligible for voting\n");
    }
    return 0;
}
```
<img width="959" alt="1" src="https://github.com/user-attachments/assets/7af0fc85-f19a-4064-9951-591325d85291" />

---

### 02.c - Ternary Operator: Voting Eligibility
```c
// condition ? expression1 : expression2;
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    (age >= 18)? printf("You can vote") : printf("You cannot vote");
    return 0;
}
```
<img width="959" alt="2" src="https://github.com/user-attachments/assets/0598f79d-27cb-4ead-bd77-cc5eac3f0ea9" />

---

### 03.c - Switch Case: Day of the Week
```c
#include <stdio.h>
int main(){
    int number;
    printf("Enter the number between 1 to 7: ");
    scanf("%i", &number);
    switch(number){
        case 1: printf("\nToday is Sunday!\n"); break;
        case 2: printf("\nToday is Monday!\n"); break;
        case 3: printf("\nToday is Tuesday!\n"); break;
        case 4: printf("\nToday is Wednesday!\n"); break;
        case 5: printf("\nToday is Thursday!\n"); break;
        case 6: printf("\nToday is Friday!\n"); break;
        case 7: printf("\nToday is Saturday!\n"); break;
        default: printf("\nInvalid Number.Choose from (1-7)\n");
    }
    return 0;
}
```
<img width="959" alt="3" src="https://github.com/user-attachments/assets/a3d08ff0-7c6f-4353-a2c1-4889f0845da0" />

---

### 04.c - Astrology Life Path Number (Switch Case)
```c
#include <stdio.h>
int main(){
    int date;
    printf("Enter date (1-31): ");
    scanf("%i", &date);

    if(date > 0 && date <= 31){
        int a = date % 10;
        int b = date / 10;
        int c = a + b;

        switch(c){
            case 1: printf("\nLucky\n"); break;
            case 2: printf("\nCarefully do your work\n"); break;
            case 3: printf("\nStorger\n"); break;
            case 4: printf("\nHappy\n"); break;
            case 5: printf("\nCan get help\n"); break;
            case 6: printf("\nDoubt\n"); break;
            case 7: printf("\nSad\n"); break;
            case 8: printf("\nLike\n"); break;
            case 9: printf("\nCourage\n"); break;
            default: printf("\nOther\n");
        }
    } else {
        printf("\nEnter a date between (1-31)");
    }
    return 0;
}
```
![4](https://github.com/user-attachments/assets/daa0963b-e6d6-4cf5-a1c4-fe229ca12831)

---

### 05.c - Fibonacci Series
```c
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    while (a <= n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
```
<img width="959" alt="5" src="https://github.com/user-attachments/assets/b071df57-adfd-470e-a413-ce944f999336" />

---

### 06.c - Factorial Series
```c
#include <stdio.h>
int main(){
    int number;
    int factorial = 1;
    printf("\nEnter a positive number: ");
    scanf("%d", &number);

    if(number > 0){
        for(int a = 1; a <= number; a++){
            factorial = factorial * a;
        } 

        printf("Factorial of %d is %d \n", number, factorial);

    } else {
        printf("\nEntered number is negative\n");
    }
     
    return 0;
}
```
<img width="959" alt="6" src="https://github.com/user-attachments/assets/8bdd3d7b-9da5-4dad-a503-741e0b40bbfd" />

---

### 07.c - String Concatenation
```c
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    strcat(str1, str2);
    printf("Concatenated string %s\n", str1);

    return 0;
}
```
<img width="959" alt="7" src="https://github.com/user-attachments/assets/b07ddc49-662a-4ffc-b41b-a9503c3a5270" />

---

### 08.c - Binary to Decimal Conversion
```c
#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}
```
<img width="959" alt="8" src="https://github.com/user-attachments/assets/aa7500dc-ada5-4745-9b12-74b37879b628" />

---

### 09.c - Max and Min in Array
```c
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
```
<img width="959" alt="9" src="https://github.com/user-attachments/assets/74e0741c-43f3-4133-85d0-b6853c2aae05" />

---

### 10.c - Pascal's Triangle
```c
#include <stdio.h>

int main() {
    int rows, i, j, space;
    int triangle[50][50];  

    printf("no of rows = ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for(j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }

            printf("%4d", triangle[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
```
<img width="959" alt="10" src="https://github.com/user-attachments/assets/fb8119a3-6bc9-43f3-bf53-6706b7bbaaf7" />

---

## How to compile and run

```bash
gcc filename.c -o filename
./filename
```

Replace `filename.c` and `filename` accordingly.

---
