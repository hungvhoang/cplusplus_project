#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
string commonprefix(vector<string> str) {
	string prefix;
	string first = str[0];
	for (int i=0; i< first.size();++i) {
		char a= first[i];
		for (int j = 1; j < str.size(); ++j) {
			if (  str[j][i]  != a  )
			break;	
			if (i != 0) {
				for (int k =0;k <= i-1; k++){
				prefix=first.substr(0,k);
				}
			break;
		}
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
