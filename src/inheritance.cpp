#include<iostream>
using namespace std;

//base class
class Clothes{
	public:
		string colour="Red";
		void Awesome(){
			cout<<"This is a nice colour"<<endl;
		}
};

//derived class
class Shirt: public Clothes{
	public:
		int price=200;
};

int main(){
	Shirt myShirt;
	myShirt.Awesome();
	cout<<"This shirt is "<<myShirt.colour<<" and costs ksh "<<myShirt.price;
}
