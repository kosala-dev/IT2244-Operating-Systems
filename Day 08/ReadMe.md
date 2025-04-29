
# Linux Day 8 - Nested Loops

## 📌 Patterns Included

### 1. Repeated Row Numbers

Prints each row number repeated as many times as the row number.

```bash
for((a=1; a<7; a++))
do
    for((b=1; b<=a; b++))
    do
        echo -n $a "  "
    done
    echo "  "
done
```

**Output:**
```
1  
2  2  
3  3  3  
4  4  4  4  
5  5  5  5  5  
6  6  6  6  6  6  
```

---

### 2. Increasing Numbers Per Row

Each row starts from 1 and increases up to the row number.

```bash
for((a=1; a<7; a++))
do
    for((b=1; b<=a; b++))
    do
        echo -n $b "  "
    done
    echo "  "
done
```

**Output:**
```
1  
1  2  
1  2  3  
1  2  3  4  
1  2  3  4  5  
1  2  3  4  5  6  
```

---

### 3. Center-Aligned Pyramid of Stars

Displays a pyramid made of `*` characters, aligned in the center.

```bash
for ((i=1; i<=7; i++))
do
    for ((k=1; k<=7-i; k++))
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
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
* * * * * * * 
```

---

## 🚀 How to Run

Make sure the script is executable and run it:

```bash
chmod +x Exercise.sh
./Exercise.sh
```

