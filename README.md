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

# Reference
- youtube https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh
- https://www.learncpp.com/