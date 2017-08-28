#include <iostream>
using namespace std;

int main() {
	float x,a;
	cout<<"Enter the length of a side of the equilateral triangle"<<endl;
	cin>>x;
	a=(1.732*x*x/4);
	cout<<"The area of the given triangle is "<<a<<" square units";
	return 0;
}
