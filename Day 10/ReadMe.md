
# Linux Day 10 - Patterns, Even Numbers, and Fibonacci

---

## 📁 File

- **loop_patterns.sh**: Contains:
  - Printing even numbers
  - Pyramid and hourglass star patterns
  - Framed square pattern 
  - Fibonacci series 

---

## 📌 Descriptions

### 1. Print Even Numbers from 2 to 50

```bash
for((a=2; a<=50; a+=2))
do
    echo -n "$a "
done
```

**Output:**
```
2 4 6 8 10 ... 50
```

---

### 2. Diamond-like Star Pattern

```bash
# Top half
for ((i=1; i<=9; i+=2))
do
    for ((k=1; k<=9-i; k++))
    do
        echo -n " "
    done
    for ((j=1; j<=i; j++))
    do
        echo -n "*"
    done
    echo ""
done

# Bottom half
for((i=7; i>=1; i-=2))
do
    for ((k=1; k<=9-i; k++))
    do
        echo -n " "
    done
    for ((j=1; j<=i; j++))
    do
        echo -n "* "
    done
    echo ""
done
```

**Output:**
```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

---

### 3. Framed Square Pattern (Partially Implemented)

```bash
for((i=1; i<=5; i++))
do
    for((j=1; j<=5; j++))
    do
        if [[ $i -eq 1 || $i -eq 5 || $j -eq 1 || $j -eq 5 ]]
        then
            echo -n "* "
        else
            echo -n "  "
        fi
    done
    echo ""
done
```
**Output:**
```
* * * * *
*       *
*       *
*       *
* * * * *
```
---

### 4. Fibonacci Series

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

## 🚀 How to Run

```bash
chmod +x loop_patterns.sh
./loop_patterns.sh
```

---

## 🧑‍💻 Author

Your Name

---

## 📝 License

MIT License
