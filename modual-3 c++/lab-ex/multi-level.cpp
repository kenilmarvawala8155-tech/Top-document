#include<iostream>
using namespace std;
class student {
	public:
	string name;
	int age;
	void getdata(){
		cout<<"enter the name and age =";
		cin>>name>>age;
		}
};
class student1:public student{
	public :
	float per;
	void data(){
		cout<<"enter the percentage=";
		cin>>per;
	}
};
	class teacher :public student1{
		public :
		float salary;
		void getsal(){
			cout<<"enter the salary=";
			cin>>salary;
		}
		void calsalary(){
			salary=salary+(salary*per/100);
			cout<<"\nsalary"<<salary;
		}
	};
main(){
	teacher t1;
	t1.getdata();
	t1.data();
	t1.getsal();
	t1.calsalary();
}
