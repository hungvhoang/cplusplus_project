#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
string commonprefix(vector<string> str) {
	string prefix= str[0];
	for (int i=0; i< str.size();++i) {
		string s = str[i];
		for (int j = 0; j < s.size(); ++j) {
			if (  s  != prefix  )	
			prefix = prefix.substr(0, j+1 );
			break;
		}
	}


	return prefix;
}

int main() {
	vector<string> str ;
	str.push_back("flower");
	str.push_back("flow");
	str.push_back("flight");
	string prefix = commonprefix(str);
	cout << prefix;
}
