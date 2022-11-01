#include <iostream>
using namespace std;
int main() {
	double r,v,pi=3.14;
	cout<< "Enter the radius of a sphere: ";
	cin>> r;
	v=(4*pi*r*r*r)/3;
	cout<<"The volume of the sphere is: "<<v<<endl;
}
