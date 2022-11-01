#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a;
	double s;
	cout<<"Enter the value of the side of the Equilateral Triangle: ";
	cin>>a;
	s=sqrt(3)/4*(a*a);
	cout<<"The area of the equilateral triangle is: "<<s<<endl;
}
