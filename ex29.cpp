#include <iostream>
using namespace std;
int main() {
	int dividend, divisor, quotient,remainder;
	cout<<"Enter the dividend: ";
	cin>>dividend;
	cout<<"\n"<<"Enter the divisor: ";
	cin>>divisor;
	quotient=dividend / divisor;
	remainder=dividend % divisor;
	cout<<"\n"<<"The quotient of the division is: "<< quotient << endl;
	cout<<"The remainder of the division is: "<< remainder << endl;
}
