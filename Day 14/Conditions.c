01.c
//if else condition
if(condition){
    //statement;
} else {
    //statement
}

//Enter your age and verify whether you are eligible or not for election voting using if else
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

-------------------------
02.c
//Ternary Operator
//condition? expression1 : express2;
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    (age > = 18)? printf("You can vote") : printf("You cannot vote");
    return 0;
}

-------------------------
03.c
//switch case
//input: Enter the number between 1 to 7: 1
//output: Today is sunday!

#include <stdio.h>
int main(){
    int number;
    printf("Enter the number between 1 to 7: ");
    scanf("%i", &number);
    switch(number){
        case 1:
        printf("\nToday is Sunday!\n");
        break;

        case 2:
        printf("\nToday is Monday!\n");
        break;

        case 3:
        printf("\nToday is Tuesday!\n");
        break;

        case 4:
        printf("\nToday is Wednesday!\n");
        break;

        case 5:
        printf("\nToday is Thursday!\n");
        break;

        case 6:
        printf("\nToday is Friday!\n");
        break;

        case 7:
        printf("\nToday is Saturday!\n");
        break;

        default:
        printf("\nInvalid Number.Choose from (1-7)\n");
    }
    return 0;
}

-------------------------
04.c

/*Write a code for small astrology based on your life path number for that get date of birth from user then calculate life path number.(use switch case)
Example
Calculation for life path number:
     a = date % 10
     b = date / 10
     c = a + b

     if life path number
         1:Lucky
         2:Carefully do your work
         3.Storger
         4.Happy 
         5.Can get help
         6.Doubt
         7.Sad
         8.Like
         9.Courage */

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
            case 1:
            printf("\nLucky\n");
            break;
    
            case 2:
            printf("\nCarefully do your work\n");
            break;
    
            case 3:
            printf("\nStorger\n");
            break;
    
            case 4:
            printf("\nHappy\n");
            break;
    
            case 5:
            printf("\nCan get help\n");
            break;
    
            case 6:
            printf("\nDoubt\n");
            break;
    
            case 7:
            printf("\nSad\n");
            break;
    
            case 8:
            printf("\nLike\n");
            break;
    
            case 9:
            printf("\nCourage\n");
            break;
    
            default:
            printf("\nOther\n");
        }
    } else {
        printf("\nEnter a date between (1-31)");
    }
    return 0;
}

-------------------------
05.c
//fibonacci series
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

-------------------------
06.c
//Factorial series
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

-------------------------
07.c
//Accept two strings as input from the  user. Concatenates the two strings displays the 
// concatenated result

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

-------------------------
08.c
//Take a binary(as an integer) as input and converts it to its decimal equivalent
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
 
-------------------------
09.c
//Write a c program that
//Accepts an array of integers from the user
//Find and displays the maximum and minimum values in the array

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


10.c
//C program to generate pascal's Triangle
/* Output:
no of rows =5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1

*/

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
