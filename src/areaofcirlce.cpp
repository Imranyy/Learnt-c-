#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"Enter the value of radius: ";
	double radius;
	cin>>radius;
	const double  PI=3.14;
	double area=PI*pow(radius,2);
	cout<<"The area of the circle is "<<area;
	return 0;
}
