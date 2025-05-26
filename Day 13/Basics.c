01.c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}

get permission from putty
gcc filename.c -o filename 

---------------------------
02.c
#include <stdio.h>
int main(){
    int age = 23;
    printf("Age: %d\n", age);
    return 0;
}

%d or %i - integers
%f - float numbers
%c - caharacter
%lf - double
%s - strings

---------------------------

03.c
#include <stdio.h>
int main(){
    int first = 25;
    printf("First number: %d", first);

    int second = first;
    printf("\nFirst number is assigned to the second number, the value is: %d\n", second);
    return 0;
}

---------------------------

04.c
#include <stdio.h>
int main(){
    int age1 = 10;
    double age2 = 12.45;
    float age3 = 10.9f;
    char letter = 'c';

    printf("size of integer: %zu", sizeof(age1)); //4 bytes
    printf("\nsize of double: %zu", sizeof(age2)); //8 bytes
    printf("\n%2lf", age2); //print only 2 decimals (%2lf)
    printf("\n.1%f", age3);
    printf("\nCharacter: %c", letter);
    return 0;
}

---------------------------
//single user input
05.c 
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); //(& - ampasan)
    printf("\nAge: %d", age);

    double number;
    printf("\nEnter double input: ");
    scanf("%lf", &number);
    printf("\nEntered double: %lf", number);

    char letter;
    printf("\nEnter char input: ");
    scanf("%c", &letter);
    printf("\nEntered char: %c", letter);
    return 0;
}

---------------------------
//multiple user input
06.c 
#include <stdio.h>

int main() {
    double number;
    char alpha;
    printf("Enter inputs: ");
    scanf("%lf %c", &number, &alpha);
    
    printf("Entered number is %lf and Entered character is %c\n", number, alpha);
    return 0;
}

---------------------------
//simple calculator
07.c 
#include <stdio.h>

int main() {
    double num1;
    double num2;

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    printf("\nAddition: %2lf", num1+num2);
    printf("\nSubstraction: %2lf", num1-num2);
    printf("\nMultiplication: %2lf", num1*num2);
    printf("\nDivision: %2lf", num1/num2);
    return 0;
}

