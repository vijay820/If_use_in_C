# Attendance Eligibility Checker

A simple C program that calculates a student's attendance percentage and checks whether they are eligible to appear for exams.

## About the Project

This program asks the user for:

- The total number of classes conducted
- The number of classes attended

It then calculates the attendance percentage and displays whether the student is eligible for exams.

A student is considered eligible if their attendance is **75% or more**.

## Features

- Takes class attendance details as user input
- Calculates attendance percentage
- Checks the 75% eligibility rule
- Displays a clear eligible or not-eligible message

## Technologies Used

- C programming language
- Standard Input/Output library (`stdio.h`)

## How to Run

1. Save the program as `attendance.c`
2. Open a terminal in the project folder
3. Compile the program:

```bash
gcc attendance.c -o attendance
```

4. Run the program:

```bash
./attendance
```

On Windows, run:

```bash
attendance.exe
```

## Example Output

```text
Enter the number of classes conducted:: 50
Enter the number of classes attended:: 40
Eligible for Exams with 80.00%
```

## How It Works

1. The program reads the total number of classes and attended classes.
2. It calculates the attendance percentage using:

```c
Attendance_percent = ((float)Class_attended / n) * 100;
```

3. It compares the percentage with `75`.
4. Based on the result, it prints whether the student is eligible.

## What I Learned

- How to use `scanf()` correctly with the address-of operator (`&`)
- Why integer division removes the decimal part
- How to use `(float)` type casting to get an accurate percentage
- How to use `if-else` conditions in 

## Author

**Vj Rathod**
