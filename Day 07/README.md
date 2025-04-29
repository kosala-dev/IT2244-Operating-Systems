
# Linux Day 7 - Shell Script

---

## 📌 Contents

1. [Life Path Number Astrology](#1-life-path-number-astrology)
2. [Summation and Multiplication (For Loop)](#2-summation-and-multiplication-for-loop)
3. [Print Numbers Using While Loop](#3-print-numbers-using-while-loop)
4. [Print Star Pattern Using Nested Loops](#4-print-star-pattern-using-nested-loops)

---

## 1. Life Path Number Astrology

This script calculates a **life path number** based on the user's date of birth and displays a message accordingly using a `switch` case.

### 🔢 Logic

1. Get date of birth from user.
2. Split date into digits and sum them.
3. Use the result to display a corresponding message.

```bash
read date
a=date%10
b=date/10
c=$(($a+$b))

case $c in
    1) echo "Lucky";;
    2) echo "Carefully do your work";;
    ...
esac
```

### 💬 Sample Output

```
Enter date of birth:- 
15
Output: Happy
```

---

## 2. Summation and Multiplication (For Loop)

Calculates the sum and product of a predefined list of numbers using a `for` loop.

```bash
sum=0
mul=1
for a in 1 2 3 4 5
do
    sum=$(($sum+$a))
    mul=$(($mul*$a))
done
```

### 💬 Output

```
Summation:- 15
Multiplication:- 120
```

---

## 3. Print Numbers Using While Loop

Prints integers from 1 to 10 using a `while` loop.

```bash
d=1
while [ $d -le 10 ]
do
    echo "$d"
    d=$(($d+1))
done
```

---

## 4. Print Star Pattern Using Nested Loops

This part prints a pyramid-style pattern of stars using nested `for` loops.

### 🔺 Output Pattern

```
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
```

---

## 🚀 How to Run

Make the script executable and run it:

```bash
chmod +x script.sh
./script.sh
```
---
## Shell Outputs
<img width="959" alt="output" src="https://github.com/user-attachments/assets/a94dd7b7-1dbd-46f6-93d7-d959f3974b8c" />

---
