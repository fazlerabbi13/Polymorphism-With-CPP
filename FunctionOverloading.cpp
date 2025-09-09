#include <bits/stdc++.h>
using namespace std;

class Addition {
public:
    
    // Function to add two integers
    void add(int a, int b) {
        cout << "Integer Sum = " << a + b
        << endl;
    }
    
    // Function to add two floating point values
    void add(double a, double b) {
        cout << "Float Sum = " << a + b
        << endl ;
    }
};

int main() {
    Addition sum;
    
    // add() called with int values
    // sum.add(10, 2);

    // add() called with double value
    // sum.add(5.3, 6.2);

    return 0;
}