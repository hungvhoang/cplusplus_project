#include <iostream>
using namespace std;
int main() {
	double r,c,s,pi=3.14;
	cout<< "Enter the radius of the circle: ";
	cin>> r;
	c=2*pi*r;
	s=pi*r*r;
	cout<<"The area of the circle is: "<<s<<endl;
	cout<<"The circumference of the circle is: "<<c<<endl;
}
