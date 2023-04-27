//WAP to implement the concept of single inheritance, multiple inheritance, multilevel inheritance and hierarchal inheritance. Single level inheritance: fields 
#include <iostream>
using namespace std;

// Base class for single inheritance
class Shape {
protected:
    int width;
    int height;
public:
    Shape(int w = 0, int h = 0) : width(w), height(h) {}
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
};

// Derived class for single inheritance
class Rectangle : public Shape {
public:
    int getArea() { return width * height; }
};

// Base class for multiple inheritance
class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

// Another base class for multiple inheritance
class Bird {
public:
    void fly() { cout << "Flying..." << endl; }
};

// Derived class for multiple inheritance
class Eagle : public Animal, public Bird {
public:
    void hunt() { cout << "Hunting..." << endl; }
};

// Base class for multilevel inheritance
class A {
public:
    void displayA() { cout << "Displaying from A..." << endl; }
};

// Derived class for multilevel inheritance
class B : public A {
public:
    void displayB() { cout << "Displaying from B..." << endl; }
};

// Derived class for multilevel inheritance
class C : public B {
public:
    void displayC() { cout << "Displaying from C..." << endl; }
};

// Base class for hierarchical inheritance
class Vehicle {
public:
    void drive() { cout << "Driving..." << endl; }
};

// Derived class for hierarchical inheritance
class Car : public Vehicle {
public:
    void park() { cout << "Parking..." << endl; }
};

// Derived class for hierarchical inheritance
class Truck : public Vehicle {
public:
    void load() { cout << "Loading..." << endl; }
};

int main() {
    // Single inheritance example
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(10);
    cout << "Single Inheritance Example" << endl;
    cout << "--------------------------" << endl;
    cout << "The area of the rectangle is: " << rect.getArea() << endl;
    cout << endl;

    // Multiple inheritance example
    Eagle eagle;
    cout << "Multiple Inheritance Example" << endl;
    cout << "----------------------------" << endl;
    eagle.eat();
    eagle.fly();
    eagle.hunt();
    cout << endl;

    // Multilevel inheritance example
    C c;
    cout << "Multilevel Inheritance Example" << endl;
    cout << "-----------------------------" << endl;
    c.displayA();
    c.displayB();
    c.displayC();
    cout << endl;

    // Hierarchical inheritance example
    Car car;
    Truck truck;
    cout << "Hierarchical Inheritance Example" << endl;
    cout << "--------------------------------" << endl;
    car.drive();
    car.park();
    truck.drive();
    truck.load();

    return 0;
}

