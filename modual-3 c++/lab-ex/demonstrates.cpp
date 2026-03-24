#include <iostream>
using namespace std;
main() {
    int age = 20;                
    float height = 5.9;  
    char grade = 'A';            
    string name = "Kenil";            
    const double PI = 3.14159;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Grade: " << grade << endl;

    int nextYearAge = age + 1;
    float circleArea = PI * (height * height); 

    cout << "Next year age: " << nextYearAge << endl;
    cout << "Area of circle with radius " << height << " is: " << circleArea << endl;
}
