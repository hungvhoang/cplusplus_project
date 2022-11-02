#include <iostream>
#include <math.h>
using namespace std;
int convert(long double a);
int dis( float a,float b,float c,float d);
int main() {
	long double lat1,long1,lat2,long2,a;
	cout<<"Enter the latitude of the coordinate 1: ";
	cin>> lat1;
	cout<<"Enter the longitude of coordinate 1:";
	cin>>long1;
	cout<<"Enter the latitude of the coordinate 2: ";
	cin>> lat2;
	cout<<"Enter the longitude of coordinate 2:";
	cin>>long2;
	double clat1=convert(lat1);cout<<clat1<<endl;
	double clong1=convert(long1);cout<<clong1<<endl;
	double clat2=convert(lat2);cout<<clat2<<endl;
	double clong2=convert(long2);cout<<clong2<<endl;
	a=dis(clat1,clat2,clong1,clong2);
	cout<<"The distance between those point is: "<<a<<endl;

}
int dis( float a, float  b, float c, float  d) {
	return (3963.0 * acos((sin(a) * sin(b)) + cos(a) * cos(b) * cos(d-c)));
}
int convert(long double l) {
	long double one_deg= M_PI/180;
	return (l*one_deg);
}
