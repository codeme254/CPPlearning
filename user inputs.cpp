#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age ";
	cin>>age;
	cout<<"You are "<<age<<" years old"<<endl;
	//to get a string however
	string name;
	cout<<"Enter your name ";
	getline(cin, name);
	cout<<"Your name is "<<name<<endl;
	return 0;
}