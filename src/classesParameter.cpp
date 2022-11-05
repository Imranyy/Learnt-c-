#include<iostream>
using namespace std;

class Car{
	public:
		int speed(int distance,int time);
};

int Car::speed(int distance, int time){
	return distance/time;
}

int main(){
	Car myObj;
	cout<<"Speed is "<<myObj.speed(20,3);
}
