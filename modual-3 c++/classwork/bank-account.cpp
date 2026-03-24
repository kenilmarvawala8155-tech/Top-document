#include<iostream>
using namespace std;
class bankaccount {
	public:
	string name ;
	float accnum;
	string tyaccou;
	int balance;
	public:
	void assing (){
		cout<<"enter the name=";
		cin>>name;
		cout<<"enter the Account number=";
		cin>>accnum;
		cout<<"enter the type of account=";
		cin>>tyaccou;
		cout<<"enter the balance of the account=";
		cin>>balance;
	}
	void deposite(){
		float amount;
		cout<<"enter the amount=";
		cin>>amount;
		balance=balance+amount;
		cout<<"amount add successfully";
	}
	void withdraw()
    {
        float amount;
        cout<<"Enter amount to withdraw=";
        cin>>amount;
		if(amount <= balance)
        {
            balance = balance - amount;
            cout<<"Withdrawal Successful"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void display()
    {
        cout<<"\nDepositor Name: "<<name;
        cout<<"\nBalance Amount: "<<balance<<endl;
    }
};

main(){
	bankaccount s1;
	s1.assing();
	s1.deposite();
	s1.withdraw();
	s1.display();
	}
