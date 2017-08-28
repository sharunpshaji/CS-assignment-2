#include <iostream>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Enter the first angle "<<endl;
	cin>>x;
	cout<<"Enter the second angle "<<endl;
	cin>>y;
	z=(180-(x+y));
	cout<<"The third angle is "<<z;
	return 0;
}
