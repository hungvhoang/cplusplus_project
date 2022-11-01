#include <iostream>
using namespace std;
int main() {
	double c,f;
	cout<< "Enter the temperature in Celsius: ";
	cin>> c;
	f=c*9/5+32;
	cout<< "\n"<< "The temperature in Celsius: "<<c<<endl;
	cout<< "The temperature in Fahrenheit: "<<f;
}
