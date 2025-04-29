## Linux Day 3 - System Operations and Date Extraction Scripts
---

Script 1: Server Operations Script (Bash)
This includes actions such as logging into the server, viewing file contents, creating files, and displaying file data with commands like ls, head, tail, awk, and grep.

Commands:
ls: List files and directories.

more: View contents of a file page by page.

touch: Create an empty file.

vi: Open a file in the vi editor.

head: Display the first N lines of a file.

tail: Display the last N lines of a file.

awk: Process and print lines from a file.

grep: Filter lines from a file based on a pattern.

---
---
Script 2: System Date Extraction Script (Batch)

The script starts by using @echo off to prevent the commands from being shown in the output, making it cleaner.

Display Full Current System Date:

The script uses echo %date% to display the entire current system date.

Extract and Display the Month:

It extracts the month part using echo Month: %date:~4,2%.

Extract and Display the Day:

It extracts the day part using echo Day: %date:~7,2%.

Extract and Display the Year:

The script extracts the year part using echo Year: %date:~10,4%.

Extract and Display the Weekday:

It extracts the weekday part using echo Weekday: %date:~0,3%.

Pause Execution:

The script uses pause to keep the console window open until the user presses a key.

---
---
Example Output:

Mon Apr 28 2025

Month: 04

Day: 28

Year: 2025

Weekday: Mon

Press any key to continue . . .

---

<img width="959" alt="Output1" src="https://github.com/user-attachments/assets/da429bc5-20aa-41c8-9f26-8cd60d386ad1" />
