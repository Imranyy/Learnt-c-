#include<iostream>
using namespace std;
int main(){
    int x;
    std::cout<<"Enter your name: ";
    std::cin>>x;
        if(x==5){
            std::cout<<"Welcome "<<x;
        }else{
            std::cout<<"Not Welcomed "<<x;
        }
    return 0;
}