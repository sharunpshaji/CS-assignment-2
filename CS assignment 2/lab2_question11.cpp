#include <iostream>
using namespace std;

int main() {
	
	float p,r,t,i;
	cout<<"What is your Principle P"<<endl;
	cin>>p;
	cout<<"What is your Rate per year R"<<endl;
	cin>>r;
	cout<<"What is your Time period T in years"<<endl;
	cin>>t;
	i=p*r*t/100;
	cout<<"Your intrest i = "<<i<<" rs";
	return 0;
}
