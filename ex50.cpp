#include <iostream>
using namespace std;
int main() {
	double kmph,mph;
	cout<< "Enter the velocity in km/h: ";
	cin>> kmph;
	mph=kmph*0.621371;
	cout<<"The "<<kmph<<" km/h means "<<mph<<" Miles/h.";
}
