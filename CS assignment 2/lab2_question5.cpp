#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Give me the base which you want to rais "<<endl;
	cin>>x;
	cout<<"To which power you want to raise it"<<endl;
	cin>>y;
	z=pow(x,y);
	cout<<"The answer you asked is = "<<z;
	
	return 0;
}
