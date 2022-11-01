#include <iostream>
int main() {
	int a,b,p,s;
	std::cout<< "enter length: ";
	std::cin>> a;
	std::cout <<"\n"<< "enter width: ";
	std::cin>> b;
	p=2*(a+b);
	s=(a*b);
	std::cout<<"\n"<<"The area of the rectangle is: "<<s<< std::endl;
	std::cout<<"\n"<<"The perimeter of the rectangle is: "<< p << std::endl;
}
