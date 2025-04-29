
# Linux Day 5: CSV File Operations Using Shell Commands

## Script Breakdown

The Day5.csv file contains the following sample data:

ID,Name,age,salary,Department
101,Alice,0,70000,Data Science
102,Bob,25,50000,Engineering
103,Charlie,5,80000,Data Science
104,David,40,90000,HR
105,Eve,28,60000,Engineering
106,Frank,38,75000,HR
107,Grace,27,72000,Data Science
108,Hank,32,68000,Engineering
109,Ivy,29,62000,Data Science
110,Jack,31,71000,HR


## Key Operations
File Creation and Viewing
Create CSV File:
touch Day5.csv

Edit File in Terminal:
vi Day5.csv

View File Contents:
more Day5.csv

Filtering and Searching
Search for 'Engineering' Department:
grep 'Engineering' Day5.csv

Display First 5 Rows:
head -5 Day5.csv

Display Last 3 Rows:
tail -3 Day5.csv

Display 7th Row:
head -n7 Day5.csv | tail -n1

Column Operations
Count Number of Columns:
awk -F, '{print NF; exit}' Day5.csv

Display Only Ages (3rd Column):
awk -F, '{print $3}' Day5.csv

Display Only Salaries (4th Column):
awk -F, '{print $4}' Day5.csv
or
cut -d, -f4 Day5.csv

Display 2nd and 3rd Columns (Name, Age):
awk -F, '{print $2 "," $3}' Day5.csv

Save 2nd and 3rd Columns to New File:
awk -F, '{print $2 "," $3}' Day5.csv > Day52.csv

Sorting Operations
Sort Salaries (Ascending):
awk -F, '{print $4}' Day5.csv | sort

Sort Entire CSV by Salary (Ascending):
sort -t',' -k4,4n Day5.csv

Sort by Age (Descending):
sort -t',' -k3,3nr Day5.csv

Sort by Salary (Descending):
sort -t',' -k4,4 -r Day5.csv

Sort Alphabetically by Name and Reverse by Salary:
sort -t',' -k4,4r Day5.csv | sort -t',' -k2,2

---

## Output Example
---
<img width="959" alt="output1" src="https://github.com/user-attachments/assets/e8197372-439b-4196-944f-e9798fc406e7" />
<img width="959" alt="output2" src="https://github.com/user-attachments/assets/d66dabf8-7fc2-4d2b-ab02-27d6bd336060" />
<img width="959" alt="output3" src="https://github.com/user-attachments/assets/63c6be65-a591-450e-833b-119321ff0d9b" />
<img width="959" alt="output4" src="https://github.com/user-attachments/assets/5fd54289-80af-4aef-8fb5-9b29b2a19c67" />
<img width="959" alt="output5" src="https://github.com/user-attachments/assets/221b2055-2f84-4d0e-a388-a30eb269e065" />

---
