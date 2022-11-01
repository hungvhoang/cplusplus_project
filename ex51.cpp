#include <iostream>
using namespace std;
int main() {
	double cm,m,km;
	cout<< "Enter the distance in centimeter: ";
	cin>> cm;
	m=cm/100;
	km=cm/100000;
	cout<<"The distance in meter: "<<m<<endl;
	cout<< "The distance in kilometer: "<<km<<endl;
}
