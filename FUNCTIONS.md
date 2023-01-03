# Functions

## Definition
```c++
return_type function_name (argumenets){
    statements;
    return 0;
}

// example
void print_int_and_str (int a, std::string b){
    cout << "Integer: " << a << " and String " << b << endl;
}
```

## Function Protoypes
- in cpp, the compiler must know about a function before it is used
- there are two ways we can do it:
    - define functions before calling them
        - ok for samll programs
        - not a practical solution for larger programs
    - use function prototypes:
        - placed at the begining at the prograam
        - also used in our own header files (.h)

```c++
int function_name(){
    statements;
    return 0;
}

int add(int a, int b){
    return a + b;
}
// the prototype would be
int function_name();
int add(int int);
```