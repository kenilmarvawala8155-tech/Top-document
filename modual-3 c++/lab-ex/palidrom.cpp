#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev ;

    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        rev =rev+str[i];
    }

    // Compare original and reversed
    if (str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
