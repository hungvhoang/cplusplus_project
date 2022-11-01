#include <iostream>
using namespace std;
int main () {
	double k,f;
	cout << "Enter the temp in Kelvin:";
	cin >> k;
	f= (k-273.15)*9/5+32;
	cout<< "\n"<< "The temp in Kelvin: "<<k<<endl;
	cout<< "The temp in Fahrenheit: "<<f<<endl;
}
