#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];  // array declaration

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];   // adding elements
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
