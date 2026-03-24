#include<iostream>
using namespace std;
main(){
	int a=50,b=25;
	//arithmetic opretor
	cout<<"sum of a and b="<<a+b<<endl;
	cout<<"sub of a and b="<<a-b<<endl;
	cout<<"mul of a and b="<<a*b<<endl;
	cout<<"div of a and b="<<a-b<<endl;
	cout<<"modual of a and b="<<a%b<<endl;
	//relation
	cout<<"a greter then b ="<<(a>b)<<endl;
	cout<<"a less then b ="<<(a<b)<<endl;
	cout<<"a equal b ="<<(a==b)<<endl;
	cout<<"a not equal to b= "<<(a!=b)<<endl;
	 // Logical Operators
    cout<<"\nLogical Operators:"<<endl;
    cout<<"and = "<<(a > 5 && b > 2)<<endl;
    cout<<" or= "<<(a > 5 || b > 10)<<endl;
    cout<<"not = "<<!(a > b)<<endl;

    // Bitwise Operators
    cout<<"\nBitwise Operators:"<<endl;
    cout<<"and ="<<(a & b)<<endl;
    cout<<"or = "<<(a | b)<<endl;
    cout<<"Xor = "<<(a ^ b)<<endl;
    cout<<"~nor = "<<(~a)<<endl;
    cout<<"right shif = "<<(a << 1)<<endl;
    cout<<"left shif= "<<(a >> 1)<<endl;

}
