#include <iostream>
using namespace std;
int main() {
	double a,b,c;
	cout<<"Enter the first angle of the triangle: ";
	cin>> a;
	cout<<"Enter the second angle of the triangle: ";
	cin>>b;
	c=180-a-b;
	cout<<"The third of the triangle is: "<<c<<endl;
}
