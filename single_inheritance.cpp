//Single level Inheritance in C++ 
// Program to print rectangle area through single inheritance

#include <iostream>  // include the standard input/output library
using namespace std; // use the standard namespace

// Base class
class Shape {   // declare a class called Shape
   public:      // public members of the class
      void setWidth(int w) {  // declare a function to set the width of the shape
         width = w;
      }
      void setHeight(int h) {  // declare a function to set the height of the shape
         height = h;
      }
   protected:   // protected members of the class
      int width;   // declare a protected variable for the width of the shape
      int height;  // declare a protected variable for the height of the shape
};

// Derived class
class Rectangle: public Shape {  // declare a class called Rectangle that inherits from the Shape class
   public:      // public members of the class
      int getArea() {  // declare a function to get the area of the rectangle
         return (width * height);
      }
};

int main() {   // main function of the program
   Rectangle Rect;  // create an object of the Rectangle class called Rect

   Rect.setWidth(5);    // set the width of the rectangle to 5
   Rect.setHeight(7);   // set the height of the rectangle to 7

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;  // print the area of the rectangle

   return 0;    // exit the program
}
