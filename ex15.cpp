#include <iostream>
using namespace std;
int main(){
	int h,r;
	double pi=3.14, v;
	cout<< "Enter radius:";
	cin>> r;
	cout<<"\n"<< "Enter height: ";
	cin>> h;
	v= pi*r*r*h;
	cout<<"\n"<<"The volume of a cylinder is: "<<v;
}
