#include <iostream>
using namespace std;
int main(){
	//string
	string studentName = "Zaphenath Paneah";
	//character-single quotes
	char grade = 'A';
	//whole numbers--use int
	int age = 22;
	//short decimals-use float
	float average = 55.75;
	//long decimals-use double
	double mainAverage = 44.89764535;
	//boolean tru false values
	bool isMale = true;
	
	cout<<"Report card for "<<studentName<<endl;
	cout<<"=====================================\n";
	cout<<"Name: "<<studentName<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Average: "<<average<<endl;
	cout<<"Unrounded average: "<<mainAverage<<endl;
	cout<<"Is male: "<<isMale<< "--->1 means person is a male and 0 means not"<<endl;
	return 0;
}