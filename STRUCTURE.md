# Structure of a Cpp Program


## Basic components
### Keywords
https://en.cppreference.com/w/cpp/keyword

### Operations
- `::` is called the scope resolution operator
- `>>` and `<<` is the stream extraction and stream insertion operator

## Preprocessor Directives
### What is a preprocesser?
The cpp preprocessor is a program that processes your source code before the compiler sees it.

The cpp preprocessor does not understand cpp, only the cpp compiler does.
### Examples
Start with `#`
- `#include`
- `#if`
- ...

## The main function
- Every cpp program must have exactly 1 main() function
- it serves as the starting point of program execution
- return 0 indicates successful program execution
- 2 versions that are both valid

First version
```cpp
int main (){
    // some code

    return 0;
}

program.exe
```
Second version
- when the program needs arguments
- typically used in command line application
- argc stands for argument count, note that we can use any name
- argv stands for argument vector, the actual arguement which we would pass into the main program
```cpp
int main(int argc, char *argv[]){
    // some code

    return 0;
}

program.exe argument1 argument2
```

## Namespaces
To reduce code verbosity at the risk of having naming conflict. e.g.
```cpp
using namespace std; // use the entire std namespace
```

you can also just 
``` cpp
using std::count; // use only what you need
using std::cin;
using std::endl;
```

## Comments
```cpp
// This is how you comment in cpp
```

```cpp
/* This 
is 
a
muli-line
comment
*/
```

## Basic I/O
Types of streams:
- `cout`: standard output stream to console
- `cin`: standard input stream from keyboard
- `cerr`: 
- `clog`: 