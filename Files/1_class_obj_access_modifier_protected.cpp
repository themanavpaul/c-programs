// C++ programming example to understand the increment operator as prefix and postfix. 
#include <iostream> 
using namespace std; 
 
// declare parent class 
class Age { 
    // protected elements    
	protected:     int age; 
}; 
// declare child class 
class ChildAge : public Age { 
 
   public:     
   void printAge(int a) { 
        age = a; 
        cout << "The Age of Child= " << age << endl; 
    } };
	int main() { 
    int ageInput; 
 
    // declare object of child class 
    ChildAge child; 
 
    cout << "Enter your age:";     cin >> ageInput; 
 
    // call child class function & pass ageInput as argument     
	child.printAge(ageInput);     return 0; 
} 

