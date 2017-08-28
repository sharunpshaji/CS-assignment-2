#include <iostream>
using namespace std;

int main() {
	float X,Y,Z;	
	cout<<"Temparature is degree fahrenheit is";
	cin>>X;
	Y=(X-32)*((double)5/9);
	
	cout<<"Temperature in degree celsius = "<<Y<<endl;
	return 0;
}
