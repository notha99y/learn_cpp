# Expressions, Statements and Operators
Expressions are the building blocks of statements and statements are the building blocks of programs in c++.

## Expression
An expression is a sequence of operators and operands that specifies a computation.

Some examples

```c++
34 // literal
favourite_number // variable
1.5 + 2.8 // addition
2*5 // multiplication
a > b // relational
a = b // assignment
```
## Statements and block statements
Some examples of statements
```c++
int x; // declaration
favourite_number = 12; // assignment
1.5 + 2.8; // expression
x = 2*5; // assignment
if (a>b) cout << "a is greater than b"; // if statements
; // null statement
```

## Operators
- assignment: used to assign values
- arithmetic: perform math
- increment and decrement: assignment + arithmetic
```c++
int counter {0};
counter++; // post increment operator by 1
++counter; // pre increment
counter--; // post decrement operator by 1
```
- relational: >= < == 
- logical 
- compound assignment: +=, -=, ..
```c++
a += 1; 
a *= 2;
```
- precedence
- other

## Mixed Type Expressions
If operands are of different types, C++ will convert one (coercion). If it can't, a comiler error would occur

### Conversions
examples
```c++
// promotion
2 * 5.2; // 2 is promoted to 2.0

// demotion
int num {0};
num = 100.2; // 100.2 is demoted to 100

// static_cast
int total_amount {100};
int total_number {8};
double result {0.0};

average = static_cast<double>(total_amount)  / total_number; // converts total_amount from int to double

```

### Logical Operators
- negation: `not`, `!`
- logical and: `and`, `&&`
- logical or: `or`, `||`