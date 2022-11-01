#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a,b,c,s,p2;
	cout<<"Enter length of first side of the triangle: ";
	cin>>a;
	cout<<"\n"<<"Enter length of second side of the triangle: ";
	cin>>b;
	cout<<"\n"<<"Enter length of third side of the triangle: ";
	cin>>c;
	p2=(a+b+c)/2;
	s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	cout<<"\n"<< "The area of the triangle is: "<<s<<endl;
}
