#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a,b,ang,s,pi=3.14159;
	cout<<"Enter the length of a side of the triangle: ";
	cin>> a;
	cout <<"\n"<< "Enter the length of another side of the triangle: ";
	cin>> b;
	cout<<"\n"<< "Enter the angle between two side: ";
	cin>> ang;
	s=(a*b*sin((pi/180)*ang))/2;
	cout<<"\n"<< "The area of the triangle: "<<s<<endl;
}
