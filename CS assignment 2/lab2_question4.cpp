#include <iostream>
using namespace std;

int main() {
	int x,y,w,d;
	cout<<"Number of days ="<<endl;
	cin>>x;
	y=x/365;
	cout<<y<<" Years ";
	w=(x-(365*y))/7;
	cout<<w<<" Weeks ";
	d=x-(365*y)-(w*7);
	cout<<d<<" Days";
	return 0;
}
