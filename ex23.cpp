#include <iostream>
using namespace std;
int main() {
	double kmph,mph;
	cout << "Enter the velocity in kmph: ";
	cin>>kmph;
	mph=kmph*0.621371;
	cout <<"\n"<< "The "<<kmph<<"km/h means "<< mph << "miles/h.";
}
