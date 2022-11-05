#include<iostream>
using namespace std;

int main(){
	cout<<"Welcome to Swahili dishes"<<endl;
	cout<<"1. Chapati\n"<<"2. Chips"<<endl;
	cout<<"Place an order: ";
	int order;
	cin>>order;
	
	//switch case
	switch(order){
		case 1:
			cout<<"You have ordered chapati";
			break;
		case 2:
			cout<<"You have ordered chips";
			break;	
		default:
			cout<<"Please try again!!";
	}
	return 0;
}
