#include <iostream>
using namespace std;
int main() {
	double r,h,v,pi=3.14;
	cout<<"Enter the radius of a cone: ";
	cin>> r;
	cout<<"Enter the height of a cone: ";
	cin>> h;
	v= 1.0/3.0*pi*(r*r)*h;
	cout<<"The volume of the cone is: "<<v;
}
