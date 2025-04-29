Q1) Fibonacci Series
Output:- First 10 Fibonacci Series
0 1 1 2 3 5 8 13 21 34

echo ""
echo "....Fibonacci...."
base1=0
base2=1
echo -n "$base1 $base2 "
for((a=2; a<=10; a++))
do
Fibo=$(($base1+$base2))
echo -n "$Fibo "
base1=$base2
base2=$Fibo
done



Q2) Factorial Series
Output:- Factorial of 5 is 120

echo ""
echo "....Factorial...."
num=5
Fact=1
for((a=1; a<=num; a++))
do
Fact=$(($Fact*$a))
done
echo "Factorial is: $Fact"


Q3) Multiples of 3 between 1 and 50

echo ""
echo "....Multiples of 3...."
number=3
for(( a=1; a<=16; a++))
do
mul=$(($number*$a))
echo -n "$mul "
done

for((a=3; a<50; a+=3))
do
echo -n "$a"
done