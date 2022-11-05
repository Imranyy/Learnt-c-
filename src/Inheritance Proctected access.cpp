#include<iostream>
using namespace std;

//base class
class Employee{
	protected: //protected access specifier
	int salary;
};

//derived class
class Programmer: public Employee{
	public:
		int bonus;
		void setSalary(int s){
			salary=s;
		}
		int getSalary(){
			return salary;
		}
};

int main(){
	Programmer myObj;
	myObj.setSalary(40000);
	myObj.bonus=155555;
	cout<<"Salary: "<<myObj.getSalary()<<endl;
	cout<<"Bonus: "<<myObj.bonus;
	return 0;
}
