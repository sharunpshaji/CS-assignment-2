#include <iostream>
using namespace std;

int main() {
	float a,b,c,d,e;
	cout<<"Marks obtained in subject1"<<endl;
	cin>>a;
	cout<<"Marks obtained in subject2"<<endl;
	cin>>b;
	cout<<"Marks obtained in subject3"<<endl;
	cin>>c;
	cout<<"Marks obtained in subject4"<<endl;
	cin>>d;
	cout<<"Marks obtained in subject5"<<endl;
	float t;
	t=a+b+c+d+e;
	cout<<"Toatal marks obtained = "<<t<<endl;
	float average;
	average=t/5;
	cout<<"Your average is "<<average<<endl;
	int r;
	cout<<"Maximum marks for all the subjects is?";
	cin>>r;
	float p;
	p=t/r*100;
	cout<<"Your percentage is = "<<r<<" %";
	
	return 0;
}
