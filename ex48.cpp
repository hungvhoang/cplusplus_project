#include <iostream>
using namespace std;
int main() {
	int a,b;
	cout<< "Enter 1st number: ";
	cin>> a;
	cout<< "Enter 2nd number: ";
	cin>> b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<< "After swapping the first number is: "<<a<<endl;
	cout<< "After swapping the second  number is: "<<b;
}
