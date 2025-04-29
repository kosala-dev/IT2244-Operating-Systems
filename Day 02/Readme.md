
# Linux Day 2: Age Calculator and Date Extraction

---

## Script Description

This script performs the following actions:

1. Prompts the user to enter their birth year.
2. Calculates the user's age using the current year.
3. Displays the full system date.
4. Extracts and displays the **month** and **day** from the system date.
5. Pauses execution until a key is pressed.

---

## Script

```batch
@echo off
:: Disable command showing in the result

set /p birthyear= Enter your birth year: 
:: Prompt for birth year

set /a age=%date:~10,4% - %birthyear% 
:: Calculate age using system year

echo Age: %age%
:: Display age

echo %date%
:: Show full system date

echo %date:~4,2%
:: Extract and show the month

echo %date%
:: Show full system date again

echo %date:~7,2%
:: Extract and show the day

pause
:: Pause until key press
```

---

## Output Example

```
Enter your birth year: 2000
Age: 25
Tue 04/29/2025
04
Tue 04/29/2025
29
Press any key to continue . . .
```
<img width="959" alt="Output1" src="https://github.com/user-attachments/assets/50217fb7-f98f-47c6-bc62-12e6cc377101" />

---

## Notes

- `%date:~10,4%` extracts the current year.
- `%date:~4,2%` extracts the current month.
- `%date:~7,2%` extracts the current day.
- Ensure system date format matches `MM/DD/YYYY` for correct results.

---
