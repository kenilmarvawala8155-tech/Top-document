#include <iostream>
using namespace std;

// Global variable
int x = 10;

void showLocal() {
    int x = 20;  
    cout << "Local : " << x << endl;
}

void showGlobal() {
    cout << "Global x inside showGlobal(): " << x << endl;
}
main() {
    cout << "Global x inside main(): " << x << endl;

    showLocal();
    showGlobal();
}
