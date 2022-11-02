#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int c,num, firstdig, lastdig,count,a,b,swapnum;
	cout<<"Enter any number: ";
	cin>> num;
	count= log10(num);
	firstdig= num/pow(10,count);
	lastdig= num % 10;
	swapnum = lastdig;
  	swapnum = swapnum  * (round(pow(10, count)));
  	swapnum = swapnum + num % (int)(round(pow(10, count)));
  	swapnum = swapnum - lastdig;
  	swapnum = swapnum + firstdig;
	cout<<"First digit in the given number: "<<firstdig<<endl;
	cout<<"Last digit in the given number: "<<lastdig<<endl;
	cout<<"The number after swap: "<<swapnum<<endl;
}
