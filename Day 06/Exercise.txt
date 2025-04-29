#Q1) Get the calender and date

cal
date


#Q2) Get the student name and marks for the 3 subjects from the user then calculate the total and the average
    #Output:-
    #Enter the name:- Kosala
    #Enter the marks for the subject 1: 80
    #Enter the marks for the subject 2: 90
    #Enter the marks for the subject 3: 70
    #Total = 240
    #Average = 80
echo ".............Marks Calculator!............."
echo "Enter the name:- "
read name
echo "Enter the marks for the subject 1:- "
read num1
echo "Enter the marks for the subject 2:- "
read num2
echo "Enter the marks for the subject 3:- "
read num3

total=$(($num1+$num2+$num3))
average=$((total/3))

echo "Total:- $total" 
echo "Average:- $average" 

#Q3) Create calculator with arithmetic operations
    #Output:-
    #Enter the first number:- 4
    #Enetr the second number:- 2
    #Summation:- 6
    #Substraction:- 2
    #Multiplication:- 8
    #Division:- 2

echo ".............Arithmatic Calculator!............."
echo "Enter the first number:- "
read number1
echo "Enter the second number:- "
read number2

Summation=$(($number1+$number2))
Substraction=$(($number1-$number2))
Multiplication=$(($number1*$number2))
Division=$(($number1/$number2))

echo "Summation:- $Summation" 
echo "Substraction:- $Substraction" 
echo "Multiplication:- $Multiplication" 
echo "Division:- $Division" 


#Q4) Get the date based on user input
    #Output:- 
    #Enter date:- 5
    #Friday
echo ".............Date Finder!............."
echo "Enter date:- "
read dates
case $dates in 
    1)echo "Monday";;
    2)echo "Tuesday";;
    3)echo "Wednesday";;
    4)echo "Thursday";;
    5)echo "Friday";;
    6)echo "Saturday";;
    7)echo "Sunday";;
    *)echo "Invalid Number";;
esac


#Q5) Verify whether your name is correct or not.(Use your name as a )
    #Output:- 
    #Enter username:- 
    #Mino
    #User name is correct
    #Output:- Enter username:- 
    #Mina
    #User name is incorrect


echo ".............Name Checker!............."
defaultUserName="Mino"
echo "Enter name:- "
read username

if [ "$username" == "$defaultUserName" ]; then
echo "User name is correct"
else
echo "User name is incorrect"
fi


#Q6)
    #Output:- 
    #Enter two numbers:- 
    #7 5
    #7 is greater than 5
    
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
