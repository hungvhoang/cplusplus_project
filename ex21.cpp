#include <iostream>
using namespace std;
int main() {
	double c,f;
	cout << "Enter the temperature in Fahrenheit: ";
	cin>> f;
	c=(f-32)*5/9;
	cout<<"\n"<< "The temp in F: "<<f<<endl;
	cout<<"the temp in C: "<<c;
}
