#include <iostream>
using namespace std;
int main() {
	double a,b,c,d,tot,av;
	cout<<"Enter 1st two nums: ";
	cin>>a>>b;
	cout<<"\n"<<"Enter last two nums: ";
	cin>>c>>d;
	tot=a+b+c+d;
	av=tot/4;
	cout<<"\n"<<"The total of four numbers is: "<<tot<<endl;
	cout<<"The average of four numbers is: "<<av;
}
