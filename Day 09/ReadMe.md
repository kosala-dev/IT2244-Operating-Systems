
# Linux Day 9 - Fibonacci, Factorial, and Multiples

---

## 📁 File

- **Exercise.sh**: Contains implementations of:
  - Fibonacci Series
  - Factorial Calculation
  - Multiples of 3 between 1 and 50

---

## 📌 Programs Included

### 1. Fibonacci Series

Prints the first 10 numbers in the Fibonacci sequence.

```bash
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
```

**Output:**
```
0 1 1 2 3 5 8 13 21 34
```

---

### 2. Factorial of a Number

Calculates the factorial of a given number (5 in this example).

```bash
num=5
Fact=1
for((a=1; a<=num; a++))
do
    Fact=$(($Fact*$a))
done
echo "Factorial is: $Fact"
```

**Output:**
```
Factorial is: 120
```

---

### 3. Multiples of 3 from 1 to 50

Two methods are used to print all multiples of 3 from 1 to 50.

**Method 1: Using multiplication**
```bash
number=3
for(( a=1; a<=16; a++))
do
    mul=$(($number*$a))
    echo -n "$mul "
done
```

**Method 2: Using incremental steps**
```bash
for((a=3; a<50; a+=3))
do
    echo -n "$a "
done
```

**Output:**
```
3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48
```

---

## 🚀 How to Run

Make the script executable and run it:

```bash
chmod +x Exercise.sh
./Exercise.sh
```
---
## Shell Outputs
<img width="959" alt="output" src="https://github.com/user-attachments/assets/ee354b98-290e-4456-a4f4-a7de5e34aaed" />
