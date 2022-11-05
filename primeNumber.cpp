#include <iostream>
using namespace std;
int isPrime (int n);

isPrime(int n){
	if(n==1||n==0) return false;
	for(int i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int N=100;
	for(int i=2; i<=N; i++){
		if(isPrime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
