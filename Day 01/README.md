
# Linux

---

### Structure Overview

Creates six main directories (`Critieria_1` to `Critieria_6`), each with numbered subdirectories named `Standar_X`.

### Sample Commands

```bash
# Create and populate Critieria_1
mkdir Critieria_1
cd Critieria_1
mkdir Standar_1 Standar_2 Standar_3 Standar_4 Standar_5
cd ..

# Repeat similarly for other Critieria_N directories
```

### Summary Table

| Directory      | Subdirectories                   |
|----------------|----------------------------------|
| Critieria_1    | Standar_1 to Standar_5           |
| Critieria_2    | Standar_1 to Standar_3           |
| Critieria_3    | Standar_1 to Standar_5           |
| Critieria_4    | Standar_1 to Standar_4           |
| Critieria_5    | Standar_1 to Standar_2           |
| Critieria_6    | Standar_1                        |

---

## Windows Script 2: User and Version Info

This batch script displays the current user and Windows version.

### Script

```batch
@echo off
:: Disable command showing in the result

echo Username: %username%
:: Display the current username

echo Windows Version:
ver
:: Show the Windows version

pause
:: Pause until a key is pressed
```

### Example Output

```
Username: johndoe
Windows Version:
Microsoft Windows [Version 10.0.19045.4170]
Press any key to continue . . .
```
<img width="959" alt="Output2" src="https://github.com/user-attachments/assets/ace56dff-99a9-459e-82f5-ad4304d3760b" />

---

## Windows Script 3: Date and Time Settings

This script displays the system date and time and prompts the user to optionally change them.

### Script

```batch
@echo off
:: Disable command showing in the result

date
:: Display and optionally set system date

time
:: Display and optionally set system time

pause
:: Pause execution until the user presses a key
```
<img width="959" alt="Output3" src="https://github.com/user-attachments/assets/645691e1-ffd4-49b6-ba5e-4d10fd37627d" />

---

## Notes

- Linux scripts should be run in a terminal (Bash).
- Windows scripts can be saved with a `.bat` extension and run from Command Prompt.
- For automation, batch these commands into `.sh` or `.bat` files.

---
