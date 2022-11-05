#include<iostream>
using namespace std;

//base class
class MyClass{
	public:
		void myFunction(){
			cout<<"some content in the parent class"<<endl;
		}
};

//another base class
class MyOtherClass{
	public:
		void myOtherFunction(){
			cout<<"some content in another class";
		}
};

//derived class
class MyChildClass: public MyClass, public MyOtherClass{
	
};
int main(){
	MyChildClass myObj;
	myObj.myFunction();
	myObj.myOtherFunction();
}
