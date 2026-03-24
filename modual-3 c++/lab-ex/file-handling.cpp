#include<iostream>
#include<fstream>
using namespace std;
main(){
	char name[20],email[50];
	ofstream f1;
	f1.open("student.txt",ios::out);
	cout<<"\n enter the name and email =";
	cin>>name>>email;
	f1<<name<<"\n"<<email;
	f1.close();
	
	
	ifstream f2;
	f2.open("student.txt",ios::in);
	f2>>name>>email;
	cout<<"\n reading name from file="<<name;
	cout<<"\n email="<<email;
	f1.close();
	
}
