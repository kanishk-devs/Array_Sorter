# Array Sorter V1 (C++)

A beginner-friendly C++ console-based program that implements **Bubble Sort** in both ascending and descending order with optimized logic and swap count tracking.

---

## Features

- Sort array in **Ascending Order**
- Sort array in **Descending Order**
- Option to perform **Both sorts**
- Optimized Bubble Sort (early stopping using `swapped` flag)
- Displays **number of swaps**
- Clean modular functions
- Menu-driven interface

---

## Concepts Used

- Arrays
- Functions
- Nested loops
- Conditional statements
- Algorithm optimization
- Time complexity basics

---

## How It Works

1. User inputs the size of the array  
2. Enters elements manually  
3. Chooses an option:
   - Ascending sort  
   - Descending sort  
   - Both  
4. Program sorts and displays:
   - Sorted array  
   - Number of swaps performed  

---

## Tech Stack

- Language: **C++**
- Compiler: g++ / any standard C++ compiler

---

## Sample Output

BUBBLE_SORT_PROGRAM

How many numbers do you want in the array?
5

Enter the numbers one by one:
5 3 8 1 2

Select option:
1. Sort in ascending order
2. Sort in descending order
3. Both

Sorted array in ascending order:
1 | 2 | 3 | 5 | 8 |

Number of swaps: 6

## How to Run

```bash
g++ main.cpp -o sorter
./sorter
