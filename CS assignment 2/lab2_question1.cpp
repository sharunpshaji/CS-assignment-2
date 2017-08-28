	#include<iostream>
	using namespace std;
	int main()
{	
	float X,Y,Z;
	cout<<"The value in centimeters"<<endl;
	cin>> X;
	Y=X/100;
	cout<< Y;cout<< "meters"<<endl;
	Z=Y/1000;
	cout<< Z;cout<<"kilometers"<<endl;
	return 0;
}
