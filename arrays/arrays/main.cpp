#include <iostream>

using namespace std;

int main() {
    int test_scores [] {100,93,99,54,79};
    cout << test_scores[0] << endl;
    test_scores[0] = 88;
    cout << test_scores[0] << endl;
    
    // multi dimension
    
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols] // creates a matrix of 3 by 4
    {
        {0,4,3,5},
        {2,2,3,5},
        {1,4,4,5}
    };

    // access element
    cout << movie_rating [1][2]; // returns 3

    return 0;
}