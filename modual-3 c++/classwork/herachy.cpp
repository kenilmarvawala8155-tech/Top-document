#include<iostream>
using namespace std;
class Employee{
	  public:
	  	  int empid;
	  	  char name[20];
	  	  int salary;
	  	  void getEmployee(){
	  	  	cout<<"\n enter empoyee id name and salary";
	  	  	cin>>empid >>name>>salary;
		}
};
class Manager:public Employee{
	public:
		void calSalary(){
			float s= salary+(salary*0.07);
			cout<<"\n Salary ="<<s;
		}
};
class Hr:public Employee{
	public:
		void calSalary(){
			float s= salary+(salary*0.1);
			cout<<"\n Salary ="<<s;
		}
};
main(){
	int ch;
	cout<<"\n press 1 if you are manager";
	cout<<"\n press 2 if you are hr";
	cout<<"\n Enter your role";
	cin>>ch;
	switch(ch){
		case 1:
			Manager m1;
			m1.getEmployee();
			m1.calSalary();
		break;
		case 2:
		   Hr h1;
		   h1.getEmployee();
		   h1.calSalary();
		break;
		default:
			cout<<"\n Wrong role";
		break;	   	
	}
}
