#include <iostream>
using namespace std;
string getDayOfWeek(int);
int main(){
	int dayNumber;
	cout<<"Enter day number to view day: ";
	cin>>dayNumber;
	cout<<"The day is: "<<getDayOfWeek(dayNumber)<<endl;
	return 0;
}
string getDayOfWeek(int dayNum){
	string day;
	switch(dayNum){
		case 1:
			day = "Monday";
			break;
		case 2:
			day = "Tuesday";
			break;
		case 3:
			day = "Wednesday";
			break;
		case 4:
			day = "Thursday";
			break;
		case 5:
			day = "Friday";
			break;
		case 6:
			day = "Saturday";
			break;
		case 7:
			day = "Sunday";
			break;
		default:
			day = "Unknown Day Number";
	}
	return day;
}