#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }
};

// class Dog : public Animal {
// public:
//     void sound() override {  // Correct override
//         cout << "Dog barks\n";
//     }
// };