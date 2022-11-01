#include <iostream>
using namespace std;
int main() {
	int swap,num1,num2;
	cout<< "Enter 1st number:";
	cin>> num1;
	cout<<"\n"<< "Enter 2nd number:";
	cin>> num2;
	swap=num1;
	num1=num2;
	num2=swap;
	cout<< "\n"<<"After swapping the 1st number is:"<<num1<<endl;
	cout<< "\n"<<"After swapping the 2nd number is:"<<num2<<endl;


}
