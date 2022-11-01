#include <iostream>
using namespace std;
int main() {
	double p,r,t,a;
	cout<< "Input the Principle: ";
	cin>> p;
	cout<<"Input the Rate of Interest: ";
	cin>> r;
	cout<< "Input the Time: ";
	cin>> t;
	a=(p*r*t)/100;
	cout<<"The Simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<a<<endl;
}
