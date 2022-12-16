# Learn Cpp

## Cheatsheet
- include package: `#include <package-name>`
- include files: `#include "file-name"`
- std: from iostream package 
- cout: character out, to print to std `std::cout << "Hello World"`
- cin: character in, to have input from `std::cin >> ` 

## Variables
- Define variables: `int x;`
- Define and initial variable `int x {6};`

## Classes
```cpp
// Class construction
class Player {
    public:
        int x, y;
        int speed;
        // Methods
        void Move(int xa, int ya){
            x += xa * speed;
            y += ya * speed
        }
};


// Initialize as a variable
int main(){
    Player player;
    player.move(1,2)
}
```

## Compiling your code
To do so you would need to have a cpp compiler installed.

For windows you need to edit the path environment to ensure that the OS can know where the compiler is installed.

### Command line
Compiled code usually have the following file format for the os:
- Windows: `.exe`
- MacOS or Linux: not extension

```bash
g++ -Wall -std=c++14 main.cpp -o main.exe
```
- -Wall: show all warnings
- -std=c++14: using the cpp 14 standards
- -o: output name

### Web-based c++ compiler
- https://cpp.sh/

# Reference
- youtube https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh
- https://www.learncpp.com/