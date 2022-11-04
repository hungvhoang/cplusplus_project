#include <iostream>
using namespace std;
int add(int n);
int main() {
	int a;
	cout <<"Enter a number: ";
	cin>>a;
	cout<<"Add 1 to "<< a <<" : "<< add(a);
}
int add(int n) {
	int sum =0;
	for (int x= 1; x <= n; x++) {
	       sum += x;
	}
	return sum;
}	
