#include<iostream>
using namespace std;
class cricket {
	public:
	string name;
	int match ;
	int totalrun,best_performance;
	void getdata(){
		cout<<"enter the name";
		cin>>name;
		cout<<"enter the match played";
		cin>>match;
		cout<<" enter the totalrun,best_performance";
		cin>>totalrun>>best_performance;
	}
};
class batsman : public cricket{
	public: 
	int average;

	void calaverage(){
			average = totalrun / match;
			cout << "Average of the batsman: " << average;
	}
	void displayData() {
        cout << "\n--- Batsman Details ---";
        cout << "\nName: " << name;
        cout << "\nMatches: " << match;
        cout << "\nTotal Runs: " << totalrun;
        cout << "\nBest Performance: " << best_performance;
        cout << "\nAverage Runs: " << average << endl;
    }
};
main(){
	batsman b1;
	b1.getdata();
	b1.calaverage();
	b1.displayData();
	
}
