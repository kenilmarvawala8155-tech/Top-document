#include<iostream>
using namespace std;
class Student {
    public:
    int rollno;

    void getRoll() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
    }

    void displayRoll() {
        cout << "Roll Number: " << rollno << endl;
    }
};
class Test : public Student {
public:
    int marks1, marks2;

    void getMarks() {
        cout << "Enter marks of Subject 1: ";
        cin >> marks1;
        cout << "Enter marks of Subject 2: ";
        cin >> marks2;
    }

    void displayMarks() {
        cout << "Marks Subject 1: " << marks1 << endl;
        cout << "Marks Subject 2: " << marks2 << endl;
    }
};
class Result : public Test {
public:
    int total;

    void calculateTotal() {
        total = marks1 + marks2;
    }

    void displayResult() {
        displayRoll();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

main(){
    Result r1;

    r1.getRoll();
    r1.getMarks();
    r1.calculateTotal();
    r1.displayResult();
}
