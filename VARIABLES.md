# Variables and Constants


## Declaring variables
- Need a type and a value.
- Variables must be declared before they are used.
- The value of a variable can change

```c++
int age = 21; // C-like initialization
int age (21); // Constructor initialization
int age {21}; // C++11 list initialization syntax. using list initialization as it would catch the error on run time.

unsigned short int exam_score {55}; // same as unsigned short
char middle_initial {'J'}; // Use single quotes for char
string name {"Frank"}; // use double quotes for string
long long people_on_earth {7'600'000'000} // C++14 compilers allows you to using ticks to make it more readaable

double rate;
string name;

bool game_over {false}; // boolean

// declaring variables which are from classes
Account franks_account;
Person james;
```

These are called local variables. 

For global variables, they are automatically initialized as 0. 

A global varaible is a variable defined outside of the `main()` function
```c++
int age {18}; // global

int main(){
    // code
}

```
## sizeof operator
The size of c++ types are dependent on the compiler and your OS.
```c++
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main(){
    cout << "sizeof info" << endl;
    cout << "====================" << endl;

    cout << "char:" << sizeof(char) << "bytes." << endl;
    cout << "int:" << sizeof(int) << "bytes." << endl;
    cout << "unsigned int:" << sizeof(unsigned int) << "bytes." << endl;
    cout << "short:" << sizeof(short) << "bytes." << endl;
    cout << "long:" << sizeof(long) << "bytes." << endl;
    cout << "long long:" << sizeof(long long) << "bytes." << endl;

}
```
## Constants
They are very much like variables as they:
- have names
- occupy storage
- are usually typed

however, their value cannot be change once declared.

### Declaring constants

```c++
// literal
x = 12;
y = 1.56;
name = "Frank";

// Integer 
// 12 - an int
// 12U - an unsigned int
// 12L - a long int
// 12LL - a long long int

// floating point
// 12.1 - a double
// 12.1F -  a float
// 12.1L -  a long double

// Declared constants
const double pi {2.142};
const int months_in_year {12};
```