#include <iostream>
using namespace std;
main() {
    int a = 10, b = 3;
    bool result;

    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << (a + b) << endl;  
    cout << "a - b = " << (a - b) << endl;   
    cout << "a * b = " << (a * b) << endl;   
    cout << "a / b = " << (a / b) << endl;   
    cout << "a % b = " << (a % b) << endl;  

    cout << "\n=== Relational Operators ===" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl; 
    cout << "a > b  : " << (a > b) << endl;  
    cout << "a < b  : " << (a < b) << endl;  
    cout << "a >= b : " << (a >= b) << endl; 
    cout << "a <= b : " << (a <= b) << endl; 

    cout << "\n=== Logical Operators ===" << endl;
    bool x = true, y = false;
    cout << "x && y : " << (x && y) << endl; 
    cout << "x || y : " << (x || y) << endl; 
    cout << "!x     : " << (!x) << endl;     

}
