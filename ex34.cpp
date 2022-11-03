#include <iostream>
#include <ctime>
using namespace std;
int main() {
	time_t t= time(0);
	tm* ltm= localtime(&t);
	cout<< "second = "<<ltm->tm_sec<<endl;
	cout<< "minute = "<<ltm->tm_min<< endl;
	cout<< "hour = "<<ltm->tm_hour<<endl;
	cout<< "day of month = "<<ltm->tm_mday<<endl;
	cout<< "month of year = "<<(ltm->tm_mon)+1<<endl;
	cout<< "year = "<<(ltm->tm_year)+1900<<endl;
	cout<<"weekday = "<<ltm->tm_wday<<endl;
	cout<<"day of year ="<< ltm->tm_yday<<endl;
	cout << " Current Date: " <<(ltm->tm_mday)<<"/"<< (ltm->tm_mon)+1 <<"/"<< (ltm->tm_year)+1900<< endl;
        cout << " Current Time: " << (ltm->tm_hour)<<":"<< (ltm->tm_min)<<":"<< (ltm->tm_sec) << endl;
}
