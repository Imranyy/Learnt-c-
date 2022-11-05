#include<iostream>
#include<fstream> //file system header file
using namespace std;

int main(){
	//create and open a text file
	ofstream MyFile("filename.txt");
	//write to the file
	MyFile<<"This is my new file";
	//close the file
	MyFile.close();
	cout<<"New file was created"
}


