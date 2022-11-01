#include <iostream>
using namespace std;
int main() {
	double k,c;
	cout<< "Enter the temp in kelvin: ";
	cin>> k;
	c= k - 273.15;
	cout<<"\n"<< "The temp in Kelvin: "<<k<<endl;
	cout << "The temp in Celcius: "<< c<<endl;
}
