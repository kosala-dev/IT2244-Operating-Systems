
# ICA 01

---

## 📌 ICA 01 Q1.txt

```
(Note: Save the extension as .bat files to run the command)

CSC2244 Marks Exam/
│
├── CSC2244/
│   ├── practical/
│   │   ├── file.txt
│   │   ├── file.docx
│   │   └── file.pptx
│   │
│   ├── teory/
│   │   ├── file.txt
│   │   ├── file.docx
│   │   └── file.pptx
│   │
│   └── exam/ (Hidden)
│       ├── file.txt
│       ├── file.docx
│       ├── file.pptx
│       ├── Icae_Marks.xlsx
│       └── Final_Exam_Marks.xlsx
│
├── Marks/
   ├── Icae_Marks.xlsx
   └── Final_Exam_Marks.xlsx

```

---

## 📄 File Descriptions

- **practical/** and **teory/**: Contain example `.txt`, `.docx`, and `.pptx` files representing class materials.
- **exam/**: A hidden folder containing similar files plus two mark spreadsheets.
- **Marks/**: Stores mark sheets before being copied to `exam/`.
- **data.csv**: Student GPA data.
- **compare_strings.sh**: A Bash script to compare the lengths of two input strings.

---

## 📊 `data.csv` Preview

| Name   | Age | Department         | GPA  |
|--------|-----|--------------------|------|
| John   | 22  | Physicalscience    | 3.5  |
| Priya  | 21  | Environmentscience | 3.7  |
| Meera  | 22  | IT                 | 3.1  |
| Carol  | 23  | Physicalscience    | 3.99 |
| David  | 21  | IT                 | 3.98 |
| Riya   | 22  | Physicalscience    | 3.6  |
| Rahman | 21  | Environmentscience | 3.7  |
| Rose   | 22  | IT                 | 2    |
| Anna   | 23  | Physicalscience    | 3.78 |
| Riyas  | 21  | IT                 | 3.76 |

---

## 📌 ICA 01 Q2.txt

### 1. Filter students with GPA > 3.5:
```bash
awk -F, 'NR==1 || $4 > 3.5' data.csv
```

### 2. Calculate average GPA:
```bash
awk -F, 'NR>1 {sum+=$4; count++} END {if (count > 0) print "Avergae GPA:", sum/count}' data.csv
```
<img width="959" alt="1" src="https://github.com/user-attachments/assets/cfb05d10-4e8a-456e-8fab-56c1eaadc5a0" />

---

## 📌 ICA 01 Q3.txt

**File**: `compare_strings.sh`

```bash
read -p "Enter String_1: " string1
read -p "Enter String_2: " string2

len1=${#string1}
len2=${#string2}

if [ $len1 -gt $len2 ]; then
    echo "$string1 is larger than $string2"
elif [ $len1 -lt $len2 ]; then
    echo "$string2 is larger than $string1"
else
    echo "Both strings are of the same length"
fi
```

To run the script:
```bash
chmod +x compare_strings.sh
./compare_strings.sh
```
<img width="959" alt="2" src="https://github.com/user-attachments/assets/b5a3741f-3373-4cbf-b76a-4c2389fc7614" />

---

📌 **Note**: The `exam` folder is hidden via `attrib +h exam` on Windows. To unhide, use:
```cmd
attrib -h exam
```
