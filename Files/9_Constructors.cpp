//Constructors in C++
#include<iostream>
using namespace std;

class Example {
    int x;
    int y;
    public:
        // Default Constructor
        Example() {
            x = 0;
            y = 0;
        }

        // Parameterized Constructor
        Example(int a, int b) {
            x = a;
            y = b;
        }

        // Copy Constructor
        Example(const Example &obj) {
            x = obj.x;
            y = obj.y;
        }
};

int main() {
    // Default Constructor
    Example e1;

    // Parameterized Constructor
    Example e2(10, 20);

    // Copy Constructor
    Example e3 = e2;

    return 0;
}
