# Controlling Program Flow

## IF STATEMENTS
```c++
if (expr)
    statment;

// examples

if (num > 10)
    cout << "num is greater than 10"

// block statement
if (num > 10){
    ++num;
    cout << "this too";
}
```
## IF ELSE STATEMENTS
```c++
if (expr1) {
    statement1;
} else if (expr2) {
    statement2;
} else {
    statement3;
}
```

## NESTED IF STATEMENTS
```
if (expr1){
    if (expr2){
        statement1;
    } else {
        statement2;
    }
}
```

## SWITCH STATEMENTS
```c++
switch (integer_control_expr){
    case expression_1: statement_1; break; // good habit to have break statement
    case expression_2: statement_2; break; // each expression has to be a literal
    ...
    case expression_n: statement_n; break;
    default: statement_default; // dont need break for default
}

// with enumeration type
enum Color {
    red, green, blue
};

Color screen_color {green};

switch (screen_color) {
    case red: cout << "red"; break;
    case green: cout << "green"; break;
    case blue: cout << "blue"; break;
    default: cout << "should never execute";
}

```

## CONDITIONAL OPERATOR
```c++
(cond_expr) ? expr1 : expr2

// example
int a{10}, b{20};
int result{};

result = (a<b) ? a:b; // returns a, as a < b is true
```
- cond_expr evaluates to a boolean expression
    - if cond_expr is true, then the value of expr1 is returned
    - else, then the value of expr2 is returned

## Iterations - Looping

### For Looping
```c++
for (initialization; condition; increment){
    statement;
}

// example to print out 1 to 5
int i {0};
for (i = 1; i <= 5; i++){
    cout << i << endl; 
}

// better way to initialize as the looping variable i is only visible in the loop

for (int i {1}; i <=5; i++){
    cout << i << endl;
}

// comma operator
for (int i {1}, j {5}; i<5; ++i, ++j){
    cout << i << " * " << j << " : " << (i*j) << endl;
}
```


### Range-based For Loop
```c++
for (var_type var_name: sequence){
    statements; // can use var_name
}

// examples
int scores [] {100, 90, 97};

for (int score : scores){
    cout << score << endl;
}

// auto keyword
for (auto score : scores){
    cout << score << endl;
}

```
### While Loop
```c++
while (expr){
    statement;
}
// example

int i {1};
while (i <=5) {
    cout << i << endl;
    ++i;
}
```

### do-while loop
```c++
// gurantee that the statement is run at least once as the statement is done first before the check of the expression.

do {
    statements;
} while (expr);


// example
char selection {};

do {
    double width {}, height {};
    cout << "Enter width and height seperated by a space: ";
    cin >> width >> height;

    double area {width * height};
    cout << "The area is " << area << endl;
    cout << "Calculate another? (Y/N): " ;
    cin >> selection;
} while (selection == 'Y' || selection == 'y');
cout << "Thanks!" << endl;
```
