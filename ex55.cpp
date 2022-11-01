#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double r,p,t,ci,ta;
	cout<< "Input the principle: ";
	cin>> p;
	cout<<"Input the rate of interest: ";
	cin>> r;
	cout<<"Input the time: ";
	cin>> t;
	ta=p*pow((1+r/100),t);
	ci=ta-p;
	cout<<"The Interest after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<ci<<endl;
	cout<<" The total amount after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<ta<<endl;
}
