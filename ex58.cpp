#include <iostream>
#include <math.h>
using namespace std;
int area( double a);
int main() {
	double a,b,s1,s2;
	cout<<"Enter the side of the first hexagon: ";
	cin>>a;
	s1= area(a);
	cout<<"The area of the first hexagon is: "<<s1<<endl;
	cout<<"Enter the side of the second hexagon: ";
	cin>>b;
	s2=area(b);
	cout<<"The area of the second hexagon is: "<<s2<<endl;
}
int area(double a) {
	return ((3/2)*sqrt(3)*(a*a));
}
