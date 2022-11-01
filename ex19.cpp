#include <iostream>
using namespace std;
int main() {
	double pi=3.14,r,c,s;
	cout<<"enter radius: ";
	cin>> r;
	c= 2*pi*r;
	s=pi*r*r;
	cout<<"\n"<<"The area of the circle is: "<<s<<endl;
	cout<<"The circumference of the circle is: "<<c<< endl;
}
