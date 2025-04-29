# Q1) Write a code for small astrology based on your life path number for that get date of birth from user then calculate life path number.(use switch case)
# Example
# Calculation for life path number:
    # a = date % 10
    # b = date / 10
    # c = a + b

    # if life path number
        # 1:Lucky
        # 2:Carefully do your work
        # 3.Storger
        # 4.Happy 
        # 5.Can get help
        # 6.Doubt
        # 7.Sad
        # 8.Like
        # 9.Courage

echo "...........Life path number...........";
echo "Enter date of birth:- "
read date

a=date%10
b=date/10
c=$(($a+$b))

case $c in 
    1)echo "Lucky";;
    2)echo "Carefully do your work";;
    3)echo "Storger";;
    4)echo "Happy";; 
    5)echo "Can get help";;
    6)echo "Doubt";;
    7)echo "Sad";;
    8)echo "Like";;
    9)echo "Courage";;
    *)echo "Other";;
esac

# Q2) Give list of numbers then calculate the summation and multiplicaion using for lopp
#Example:- 1 2 3 4 5
    #Summation:- 15
    #Multiplication:- 120

echo "...........For loop calculator..........."
sum=0;
mul=1;
for a in 1 2 3 4 5
do
sum=$(($sum+$a))
mul=$(($mul*$a))
done
echo "Summation:- $sum";
echo "Multiplicatoin:- $mul";


# Q3) Print the integers from 1 to 10 using while loop
echo "...........While loop ..........."
let d=1;
while [ $d -le 10 ]
do
echo "$d"
d=$(($d+1))
done

# Q4) Print the below pattern using nested loop
#columns = 7, rows = 7
# i.) 
     
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    * * * * * * 

    * * * * * * 
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
    

echo "...........Nested Loops ..........."
for((a=0; a<7; a++))
do
for((b=0; b<a; b++))
do
echo -n " * "
done
echo "  "
done

echo " "

for((a=1; a<=7; a++))
do
for((b=7; b>a; b--))
do
echo -n " * "
done
echo "  "
done