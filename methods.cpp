#include<iostream>
using namespace std;

class MyClass{
	public: //access specifier
	//method /function inside a class
	void Hello(){
		cout<<"Hello world!"<<endl;
	}
	//method/function declaration
	void myMethod();
};

//method/function definition outside the class
void MyClass::myMethod(){
	cout<<"I am the best";
}

int main(){
	MyClass myObj;//creating a object of MyClass
	myObj.Hello(); //call the method
	
	MyClass myObj2;
	myObj2.myMethod();
}
