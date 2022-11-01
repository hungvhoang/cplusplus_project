#include <iostream>
using namespace std;
int main() {
	double a,b,p,s;
	cout<<"Enter the width of the rectangle: ";
	cin>> a;
	cout<<"Enter the length of the rectangle: ";
	cin>>b;
	p=(a+b)*2;
	s=a*b;
	cout<< "The area of the rectangle: "<<s<<endl;
	cout<< "The perimeter of the rectangle: "<< p<<endl;
}
