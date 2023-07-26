# Pointers and References
## What is a Pointer?
- A pointer is a variable whose value is an address
- Another variable or a function can be at that address
- To use a pointer we need to the type of the data it points to

## Why do we need a Pointer?
Can't I just use the variable or function itself? - Yes, but not always

- Inside functions, pointers can be used to access data that are defined outside the function. Those variables may not be in scope so you can't access them by their name
- Pointers can be used to operate on arrays very efficiently
- We can allocate memory dynamically on the heap or free store
    - This memory doesn't even have a variable name
    - The only way to get to it is via a pointer
- With OO. pointers are how polymorphism works!
- Can access specific addresses in memory
    - useful in embedded and system applications


## Declaring Pointers
```c++
int *int_ptr;
double* double_ptr;
char *char_ptr;
string *string_ptr

// all works
```

It is important to initilize pointers to `nullptr` which points to nowhere. 

If you don't do that it will contain to gabarge data (containing an address to anywhere)

This is one of the most common mistakes junior programmers make
```c++
int *int_ptr {};
double* double_ptr (nullptr);
```

## Address Operator
The `&` is the address operator which evaluates the address of its operand

```c++
int num{10};
cout << "Value of num is: " << num << endl; // 10
cout << "sizeof of num is: " << sizeof num << endl; // 4
cout << "address of num is: " << &num << endl; // 0x61ff1c
```

One more example
```c++
int *p;
cout << "Value of p is: " << p << endl; // 0x61ff60 - garbage
cout << "Address of p is: " << &p << endl; // 0x61ff18 address of the garbage
cout << "sizeof of num is: " << sizeof p << endl; // 4
p = nullptr; // set p to point nowhere
cout << "Value of p is: " << p << endl; // 0
```

From the above example, we learnt that the size of all the pointers is 4

## Dereferencing a Pointer
In order to access the data we are pointing to, we have to dereference the pointer.

- if `score_ptr` is a pointer and has a valid address
- then you can access the data at the address contained in the `score_ptr` using the dereferencing opertor `*`

```c++
int score {100};
int *score_ptr {&score};

// dereferencing
cout << *score_ptr << endl; // 100

// changing the value of score
*score_ptr = 200;
cout << score << endl; // 200
```

## Dynamic Memory Allocation
Allocating storage from the heap at runtime

- We often don't know how much storage we need until we need it
- We can allocate storage for a variable at run time
- Recall C++ arrays
    - We had to explicity provide the size and it was fixed
    - but vectors grow and shrink dynamically
- We can use pointers to access newly allocated heap storage

Using `new` to allocate storage  on heap

Use `delete` to deallocate storage else it will create a memory leak
```c++
int *int_ptr {nullptr};
int_ptr = new int; // allocates an integer on the heap
cout << int_ptr << endl; // 0x2747f28
cout << *int_ptr << endl; // 41188048 - garbarge
*int_ptr = 100;
cout << *int_ptr << endl; // 100

delete int_ptr;
```

## Relationship Between Arrays and Pointers
- the value of an array name is the address of the first element in the array
- the value of a pointer variable is an address
- if the pointer points to the same data types as the array element then the pointer and array name can be used interchangeable (almost)

```cpp
int scores[] {100, 95, 89};

cout << scores << endl; // 0x61fec8
cout << *scores << endl; // 100

int *score_ptr {scores}; // we dont need to put the & here because the value of an array name is the address of the first element in the array 

cout << score_ptr << endl; // 0x61fec8
cout << *score_ptr << endl; // 100

// we can access the elements of an array like this using the pointer
cout << score_ptr[0] << endl; // 100
cout << score_ptr[1] << endl; // 95
cout << score_ptr[2] << endl; // 89

// we can also still access the address of other other elements of an array like this

// when we add 1, we are adding the address of the next integer which is 4 bytes away
cout << score_ptr << endl; // 0x61ff10
cout << score_ptr + 1 << endl; // 0x61ff14 
cout << score_ptr + 2 << endl; // 0x61ff18

// with this we can follow the pointer and dereference it to get the value
cout << *score_ptr << endl; // 100
cout << *(score_ptr + 1) << endl; // 95 
cout << *(score_ptr + 2) << endl; // 89
```

### Subscript and Offset notation equivalence

```cpp
int array_name[] {1,2,3,4,5};
int *pointer_name {array_name};

// they are all the same
// subscript notation
array_name[index]
pointer_name[index]
// offset notation
*(array_name + index)
*(pointer_name + index)
```

## Pointer Arithmetic
- Pointers can be used in 
    - assignment expressions
    - arithmetic expressions
    - comparsion expressions
- C++ allows pointer arithmetic
- Pointer arithmetic only make sense with raw arrays

### Increment and Decrement operator
- (++) increments a pointer to point to the next array element
```cpp
int_ptr++;
```
- (--) decrements a pointer to point to the previous array element
```cpp
int_ptr--;
```

we can also use the + and -

### Subtracting two pointers
- When we substract two pointers of the same data type it will return the number of elements between the pointers
```cpp
int n = int_ptr2 - int_ptr1;
```


### Comparing two pointers
Determine if two pointers are pointing to the same location