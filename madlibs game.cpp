#include <iostream>
using namespace std;
int main(){
	cout<<"WELCOME TO THE MADLIBS GAME"<<endl;
	cout<<"==========================="<<endl;
	string name, color, pluralNoun, randomNoun;
	cout<<"Enter your name ";
	getline(cin, name);
	cout<<"Enter a random noun ";
	getline(cin, randomNoun);
	cout<<"Enter your favorite color ";
	getline(cin, color);
	cout<<"Enter a plural noun ";
	getline(cin, pluralNoun);
	
	cout<<"My name is "<<name<<endl;
	cout<<"Roses are "<<color<<endl;
	cout<<pluralNoun<<" are cruel"<<endl;
	cout<<"I love "<<randomNoun<<endl;
	
	return 0;
}