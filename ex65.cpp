#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> side(3);
	cin>> side[0]>>side[1]>>side [2];
	sort(side.begin(), side.end());
	if ((side[0]*side[0]) + (side[1]*side[1]) == (side[2]*side[2])) {
	       cout<< "Three given sides is from a right triangle.";
	}
	else {
		cout<< "Three given sides is not from a right triangle.";
	}	
}
