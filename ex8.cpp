#include <iostream>
int main() {
	int x= 2147483647 , y=-2147483648;
	std::cout << "Overflow the integer range and set in minimum range: "<<y -1<<"\n";
	std::cout << "Increasing from its minimum range: "<<y +1<<"\n";
	std::cout << "Product is:"<< y *y<<"\n";
	std::cout << "Underflow the integer range and set in maximum range: "<<x +1<<"\n";
	std::cout << "Increasing from its maximum  range: "<<x-1<<"\n";
	std::cout << "Product is:"<< x *x<<"\n";
}

