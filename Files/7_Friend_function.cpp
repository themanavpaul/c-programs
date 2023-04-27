//friend function in C++:

#include<iostream>
using namespace std;

class B; // forward declaration

class A {
   public:
      void display(B&);
};

class B {
   private:
      int b;
   public:
      B() : b(0) {}
      friend void A::display(B& x); // Friend function
};

void A::display(B& x) {
   x.b = 10;
   cout << "B::b = " << x.b;
}
int main() {
   A a;
   B x;
   a.display(x);
   return 0;
}
