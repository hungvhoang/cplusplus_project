#include <iostream>
using namespace std;
int main() {
	int r;
	double pi=3.14, vol;
	cout << "Enter the radius of a sphere: ";
	cin>> r;
	vol= 4/3*pi*r*r*r;
	cout<< "\n"<< "The volume of a sphere is: "<<vol<<endl;
}
