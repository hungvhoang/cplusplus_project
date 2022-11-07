#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string commonprefix(vector<string> str) {
	string first = str[0], last= str[2];
	for (int i=0; i< first.length();i++) {
		if (first[i] != last[i]) break;
		string result;
		result= first.substr(0,i);
		return result;
	}
}
int main() {
	vector<string> str ;
	str.push_back("flower");
	str.push_back("flow");
	str.push_back("flight");
	string prefix = commonprefix(str);
	cout << prefix;
}
