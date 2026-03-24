#include<iostream>
using namespace std;
class Category{
	 public:
	 	int cid;
	 	char cname[20];
	 	
	 	void getCategory(){
	 		cout<<"\n Enter catid and catname";
	 		cin>>cid>>cname;
		 }
};

class Product : protected Category{
	public:
		int pid,price;
		char pname[20];
		
		void getProductData(){
			getCategory();
			cout<<"\n Enter pid pname price ";
			cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n Catid="<<cid<<"\t catname="<<cname;
			cout<<"\n pid="<<pid<<"\t pname="<<pname;
			cout<<"\n price="<<price;
		}
};
main(){
	Product p1;
	//p1.getCategory();
	p1.getProductData();
	p1.showProduct();
	//cout<<p1.cid;
}
