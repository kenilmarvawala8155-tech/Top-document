#include<iostream>
using namespace std;
class simint{
	public:
		int p,r,n;
		simint(){
			cout<<"\n enter p r n";
			cin>>p>>r>>n;
		}
		~ simint (){
			cout<<"\n destructor method called";
		}
		void findint(){
			float i=p*r*n/100;
			cout<<"\n simple inttrst"<<i;
		}
};
main(){
	simint s1;
	s1.findint();
}
