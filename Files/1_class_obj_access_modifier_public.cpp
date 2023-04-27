//WAP to implement Classes and Objects with access modifiers. 

#include<iostream> 
using namespace std; 
 
// define a class 
class Circle { 
 
    // public elements     
	public:  
    double radius; 
 
    double displayArea() {         
	return 3.14 *radius*radius; 
    } }; 
int main() { 
 
    // declare a class object 
    Circle obj; 
 
    // accessing public data member outside class     
	obj.radius = 4.5; 
     
    cout << "Radius of Circle: " << obj.radius << endl;     cout << "The Area of Circle: " << obj.displayArea(); 
 
    return 0; 
} 

