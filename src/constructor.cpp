#include<iostream>
using namespace std;

class MyClass{
	public:
		//constructor should have the same name as the class
		MyClass(){
			cout<<"Hello there!";
		}
};

int main(){
	MyClass myObj;//create an object of MyClass (this will call the constructor)
	return 0;
}
