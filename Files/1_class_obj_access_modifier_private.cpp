 #include <iostream> 
using namespace std; 
 
// define a class 
class Age { 
 
    // private elements    
	private:     int age; 
 
    // public elements    
	public:     void printAge(int a) { 
        age = a; 
        cout << "The Age is = " << age << endl; 
    } 
}; 
 
int main() { 
 
    int ageInput; 
 
    // declare an object 
    Age obj; 
 
    cout << "Enter your age: "; 
    cin >> ageInput; 
 
    // call function and pass ageInput as argument     
	obj.printAge(ageInput); 
 
    return 0; 
} 

