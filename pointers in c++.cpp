#include <iostream>
using namespace std;
int main(){
	int age = 20;
	string name = "Zaph";
	double ratings = 4.5;
	
	//creating the pointers
	int *pAge = &age;
	string *pName = &name;
	double *pRatings = &ratings;
	cout<<"Age variable address "<<pAge<<endl;//Age variable address 0x67fedc
	cout<<"Name variable address "<<pName<<endl;//Name variable address 0x67fed8
	cout<<"Ratings variable address "<<pRatings<<endl;//Ratings variable address 0x67fed0
	
	//dereferencing pointers => grabbing the values from address
	cout<<*&age<<endl;
	cout<<*&name<<endl;
	cout<<*&ratings<<endl;
	
	return 0;
}