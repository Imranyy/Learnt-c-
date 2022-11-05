#include<iostream>
using namespace std;

class MyClass{
	public:
		int x;
	private:
		int y;
};
int main(){
	MyClass myObj;
	myObj.x=50;//public
	myObj.y=20;//not allowed (private)
	
	cout<<myObj.x<<endl;
	return 0;
}
