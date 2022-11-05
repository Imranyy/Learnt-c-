#include<iostream>
using namespace std;
//class
class Car{
	public://access specifier
	//attributes
		int year;
		string model;
		string brand;
};

int main(){
	Car carObj1; //created an object out of Car class called carObj1
	Car carObj2;//object2
	
	//access attributes and set values
	carObj1.year=1990;
	carObj1.model="Mustang";
	carObj1.brand="Ford";
	
	carObj2.year=1998;
	carObj2.model="Toyota";
	carObj2.brand="Premier";
	//printing attritube values
	cout<<"This is "<<carObj1.year<<" "<<carObj1.model<<" "<<carObj1.brand<<endl;
	cout<<"This is "<<carObj2.year<<" "<<carObj2.model<<" "<<carObj2.brand;
}

