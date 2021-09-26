#include <iostream>
using namespace std;
int main(){
	string name = "Zaph code academy";
	//to find the length of a string
	cout<<name.length()<<endl;//17
	//accesing individual characters
	cout<<name[0]<<endl;
	cout<<name[1]<<endl;
	cout<<name[2]<<endl;
	//modifying characters
	name[5] = 'C';
	name[10] = 'A';
	cout<<name<<endl;//Zaph Code Academy
	//checking if a string appears in a string
	cout<<name.find("Academy", 0)<<endl;//returns 10 i.e where the string starts from
	//creating a string from a string
	string schoolOwner = name.substr(0, 4);
	cout<<schoolOwner<<endl;//returns Zaph
	return 0;
}