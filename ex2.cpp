#include <iostream>
int sum(int a, int b);
int main() {
	int a,b;
	std::cout << "enter a: ";
	std::cin >> a;
	std::cout << "\n"<< "enter b: ";
	std::cin >> b;
	std::cout <<"\n"<< "sum= "<<sum(a, b);

}
int sum(int a, int b) {
	return(a + b);

}
