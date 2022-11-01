#include <iostream>
using namespace std;
int main() {
	double r,h,v,pi=3.14;
	cout<< "Enter the radius of the cylinder: ";
	cin>> r;
	cout<< "Enter the height of the cylinder: ";
	cin>> h;
	v=pi*r*r*h;
	cout<<"The volume of the cylinder is: "<<v<<endl;
}
