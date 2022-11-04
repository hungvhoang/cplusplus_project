#include <iostream>
using namespace std;
long factorial(int a);
int main() {
	int a;
	cout<< "Enter a number: ";
	cin>> a;
	cout<< a<<"!="<<factorial(a);
}
long factorial(int a) {
	if (a== 0) {
		return 1;}
	else {
		return a* factorial(a-1);
	}
}
