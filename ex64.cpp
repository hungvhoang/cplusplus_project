#include <iostream>
#include <sstream>
using namespace std;
int main() {
	int a,b;
	while (cin>>a>>b) {
		stringstream str1;
		str1<< a +b;
		cout << str1.str().size()<<endl;
	}
}
