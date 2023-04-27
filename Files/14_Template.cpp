//Template
#include <iostream>
using namespace std;

template <typename T>
T add(T x, T y) {
   return x + y;
}

int main() {
   int a = 5, b = 10;
   double c = 2.5, d = 3.5;

   cout << "Sum of integers: " << add(a, b) << endl;
   cout << "Sum of doubles: " << add(c, d) << endl;

   return 0;
}
