# Arrays and Vectors
Arrays and vectors are compound data types, data types which are made up of other data types.
## Arrays
An array is a collection of elements where all the all elements are of the same type and each element can be accessed directly.

They are fixed in size,meaning they would not grow or shrink, and elements are stroed contiguously in memory. You would have to destory and recreate if you want to change an array. 

First element is at index 0 and last element is at index size -1. 

They are very efficient.

### Declaring and Initializing Arrays
```c++
int test_scores [5]; // declaring an array called test scores with data type int and size of 5.
int high_score_per_level [10]; 

// initializing
int test_scores [5] {100,95,99,87,88}; 

int high_score_per_level [10] {3,5}; // init first two elements as 3 and 5 will the remaining are 0

const double days_in_year {365};
double hi_temperature [days_in_year] {0}; // init all elements to 0

int another_array [] {1,2,3,4,5}; // size automatically calculated from the initializer
```

### Accessing and modifying different array elements
```c++
test_scores[0]; // first element
test_scores[0] = 82 // set the first element to 82
```
### Multi Dimensional Arrays
```c++
const int rows {3};
const int cols {4};
int movie_rating [rows][cols] // creates a matrix of 3 by 4
{
    {0,4,3,5},
    {2,3,3,5},
    {1,4,4,5}
};

// access element
movie_rating [1][2]; // returns 3
```
## Vectors
Modern cpp, we dont use arrays, but vectors. 

### What is a vector?
- they are objects in the c++ standard template library
- an array that can grow and shrink in size at execution time
- provides similar semantics and syntax as arrays
- very efficient
- can provide bound checking
- can use lots of cool functions like sort, reverse, find and more.


### Declaring
```c++
#include <vector>

vector <char> vowels; // creates an empty vector
vector <int> test_scores;

vector <char> vowels (5); // creates a vector of size 5 initialized to 0

vector <char> vowels {'a', 'e', 'i', 'o', 'u'} // create and initialize a vector
```

### Vector functions
```c++
vector <int> test_scores {100, 95, 99}; 
test_scores.at(0) // first element
test_scores.push_back(80); // 100, 95, 99, 80

cout << "there are " << test_scores.size() << " scores in the vector"

// Matrix in vector
vector <vector<int>> movie_ratings 
{
    {1,2,3,4},
    {1,2,4,4},
    {1,3,4,5}
};
```