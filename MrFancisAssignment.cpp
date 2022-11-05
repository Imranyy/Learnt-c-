#include<iostream>
using namespace std;
//base class
class Animal{
	public:
		void animalSound(){
			cout<<"The animal makes sounds \n";
		}
			void pigSound(){
			cout<<"The pig says: wee wee\n";
		}
			void dogSound(){
			cout<<"The dog says : bow wow \n";
		}
};
//derived pig class
class Pig: public Animal{
	
};
//derived dog class
class Dog: public Animal{
	
};

int main(){
	Animal myAnimal;
	Pig myPig;
	Dog myDog;
	
	myAnimal.animalSound();
	myPig.pigSound();
	myDog.dogSound();
	return 0;
}
