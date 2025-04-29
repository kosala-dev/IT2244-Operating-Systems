## Linux Day 6 - Shell Script Exercises
---
## Q1. Display Calendar and Current Date

**Script:**
cal
date
Purpose:
Prints the current month's calendar and the current date and time.

---
---
## Q2. Student Marks Calculator
---
echo ".............Marks Calculator!............."
echo "Enter the name:- "
read name
echo "Enter the marks for the subject 1:- "
read num1
echo "Enter the marks for the subject 2:- "
read num2
echo "Enter the marks for the subject 3:- "
read num3

total=$(($num1 + $num2 + $num3))
average=$((total / 3))

echo "Total:- $total" 
echo "Average:- $average"

---
Purpose:
Takes input of a student name and 3 subject marks, then calculates the total and average.

## Q3. Arithmetic Calculator

---
echo ".............Arithmatic Calculator!............."
echo "Enter the first number:- "
read number1
echo "Enter the second number:- "
read number2

Summation=$(($number1 + $number2))
Substraction=$(($number1 - $number2))
Multiplication=$(($number1 * $number2))
Division=$(($number1 / $number2))

echo "Summation:- $Summation" 
echo "Substraction:- $Substraction" 
echo "Multiplication:- $Multiplication" 
echo "Division:- $Division"

---
Purpose:
Performs all four basic arithmetic operations between two user-provided numbers.

---
## Q4. Day Finder Using Case Statement

echo ".............Date Finder!............."
echo "Enter date:- "
read dates
case $dates in 
    1) echo "Monday" ;;
    2) echo "Tuesday" ;;
    3) echo "Wednesday" ;;
    4) echo "Thursday" ;;
    5) echo "Friday" ;;
    6) echo "Saturday" ;;
    7) echo "Sunday" ;;
    *) echo "Invalid Number" ;;
esac

---
Purpose:
Maps a number (1–7) to a corresponding weekday.

---
## Q5. Username Verifier

echo ".............Name Checker!............."
defaultUserName="Mino"
echo "Enter name:- "
read username

if [ "$username" == "$defaultUserName" ]; then
    echo "User name is correct"
else
    echo "User name is incorrect"
fi

---
Purpose:
Verifies if the entered name matches a predefined correct username.

---
## Q6. Greater Number Finder

echo ".............Greater Finder!............."
echo "Enter two numbers:- "
read a b

if [ $a -gt $b ]; then
    echo "$a is greater than $b"
elif [ $a -lt $b ]; then
    echo "$b is greater than $a"
else
    echo "Both numbers are equal"
fi

---
Purpose:
Compares two numbers and prints which one is greater (or if they are equal).

---
How to Use
Save all the scripts in a single .sh file.

Make the script executable:
chmod 777 scriptname.sh

Run the script:
./scriptname.sh

---