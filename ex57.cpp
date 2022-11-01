#include <iostream>
#include <math.h>
using namespace std;
int area(int a, int n);
int main() {
	double n1,n2,b,a,s1,s2;
	cout<< "Enter the side of the first polygon: ";
	cin>>n1;
	cout<<"Enter the length of the side: ";
	cin>>a;
	s1=area(a,n1);
	cout<< "The area of the first polygon is: "<<s1<<endl;
	cout<< "Enter the side of the second polygon: ";
	cin>>n2;
	cout<<"Enter the length of the side: ";
	cin>>b;
	s2=area(b,n2);
	cout<< "The area of the second polygon is: "<<s2<<endl;
}
int area(int a, int n) {
	return ((a*a*n)/(4*tan(M_PI/n)));
}
