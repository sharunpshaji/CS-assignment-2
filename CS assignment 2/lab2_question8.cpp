#include <iostream>
using namespace std;

int main() {
	float b,h,a;
	cout<<"Enter the base length of triangle in centimeters"<<endl;
	cin>>b;
	cout<<"Enter the height of triangle in centimeters"<<endl;
	cin>>h;
	a=b*h/2;
	cout<<"The Area of the Triangle is "<<a<<" square centimeters";
	
	return 0;
}
