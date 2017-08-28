#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float p,r,t,a,x,i;
	cout<<"What was your amount of loan?"<<endl;
	cin>>p;
	cout<<"what is the rate per year(in percentage)?"<<endl;
	cin>>r;
	cout<<"what was the period of loan?(in years)"<<endl;
	cin>>t;
	x=p*(1+(r/100));
	a=pow(x,t);
	i=a-p;
	cout<<"The intrest is = "<<i<<" rs"<<endl;
	cout<<"The total Amount you should pay is = "<<a<<" rs"<<endl;
	return 0;
}
