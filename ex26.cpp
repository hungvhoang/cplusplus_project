#include <iostream>
using namespace std;
int main() {
	double f,k;
	cout<< "Enter the temp in Fahrenheit: ";
	cin>> f;
	k= (f-32)*5/9+273.15;
	cout<< "\n"<<"The temp in Fahrenheit: "<<f;
	cout<< "\n"<<"The temp in Kelvin: "<<k;
}
