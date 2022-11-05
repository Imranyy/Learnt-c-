#include<iostream>
using namespace std;
void welcome(string value);
void notWelcome();	

int main(){
	cout<<"Enter your name: ";
	string value;
	cin>>value;
	
	//if statement
	if(value=="imran"||value=="Imran"){
		welcome(value);
	}else{
		notWelcome();
	}
	
	return 0;
}
//welcomed function
	void welcome(string value) {
		cout<<"Hello "<<value;
	}
//not welcomed function
	void notWelcome(){
		cout<<"You are not welcomed";
	}
