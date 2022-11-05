#include<iostream>
using namespace std;
int sum(int value);//sum function declaration

//main function
int main(){
	int value=2;
	cout<<"The sum is "<<sum(value);
	return 0;
}

//sum function
int sum(int value){
	return 5 + value;
}
