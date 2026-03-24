#include<iostream>
using namespace std;
class maths{
	private:
		int x,y;
		public:
			maths(){
				x=10;
				y=20;
			}
			friend class frinclass;
};
class frinclass{
	public:
		void add(maths m1){
			cout<<"\n addtion ="<<m1.x+m1.y;
		}
};
main(){
	maths m1;
	frinclass f1;
	f1.add(m1);
}
