# Hybrid-Calculator-by-Oops-inheritance
# Hybrid Calculator — C++

A console-based **Hybrid Calculator** developed in **C++** using Object-Oriented Programming (OOP) concepts.

This project combines the functionality of a **Simple Calculator** and a **Scientific Calculator** using inheritance and virtual inheritance.

## Features

### Simple Calculator

* Addition
* Subtraction
* Multiplication
* Division

### Scientific Calculator

* Sine
* Cosine
* Tangent
* Square root of the sum of two numbers

### Hybrid Calculator

* Combines simple and scientific calculator functionalities.
* Accepts two numbers as input.
* Performs basic arithmetic operations.
* Displays scientific calculation results.

## OOP Concepts Used

This project demonstrates the following C++ concepts:

* Classes and Objects
* Inheritance
* Multiple Inheritance
* Virtual Inheritance
* Protected Data Members
* Public Member Functions
* Switch-Case Statements
* Function Organization

### Class Structure

```text
             simplecalc
              /      \
       virtual       virtual
          /             \
    scicalc          simplecalc
          \             /
           \           /
            hibridcalc
```

The `hibridcalc` class combines the functionality provided by `simplecalc` and `scicalc`.

## Project Structure

```text
Hybrid-Calculator/
│
├── hibridcalc.cpp
└── README.md
```

## How to Run

### 1. Clone the Repository

```bash
git clone <your-repository-url>
```

### 2. Navigate to the Project Directory

```bash
cd Hybrid-Calculator
```

### 3. Compile the Program

```bash
g++ hibridcalc.cpp -o hibridcalc
```

### 4. Run the Program

On Linux or macOS:

```bash
./hibridcalc
```

On Windows:

```bash
hibridcalc.exe
```

## Example

```text
Enter the values of num1 and num2 for simple or scientific calculator

10 5

Press 1 for addition
Press 2 for subtraction
Press 3 for multiplication
Press 4 for division

1

The value of num1 + num2 = 15

The value of sin for these numbers is 2
The value of cos for these numbers is 2
The value of tan for these numbers is 2
The square root of the sum of these numbers is 3.87298
```

> **Note:** The current `sin()`, `cos()`, and `tan()` functions are placeholders and currently return `num1 / num2` instead of performing actual trigonometric calculations.

## Future Improvements

* Implement actual sine, cosine, and tangent calculations using `<cmath>`.
* Add degree and radian support.
* Implement division-by-zero handling.
* Add a loop for performing multiple calculations.
* Improve input validation and error handling.
* Add additional scientific operations such as logarithms, powers, and factorials.
* Improve the overall user interface and menu system.

## Purpose

The primary purpose of this project is to strengthen understanding of **C++ Object-Oriented Programming**, particularly inheritance, multiple inheritance, and virtual inheritance, through the development of a practical console-based application.

## Author

**Adi**

C++ project developed as part of learning and practicing Object-Oriented Programming.
