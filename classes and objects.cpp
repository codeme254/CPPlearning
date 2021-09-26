#include <iostream>
using namespace std;
class Person{
	public:
		string name;
		int numberOfFriends;
		int age;
		string career;
		Person(string pName, int pFriends, int pAge, string pCareer){
			name = pName;
			numberOfFriends = pFriends;
			age = pAge;
			career = pCareer;
		}
};
int main(){
	/*//initialising a class when there is no constructor function
	Person person1;
	person1.name = "Zaphenath Paneah";
	person1.numberOfFriends = 10;
	person1.age = 20;
	person1.career = "Software and Web Developer";
	cout<<person1.name<<endl;
	cout<<person1.numberOfFriends<<endl;
	cout<<person1.age<<endl;
	cout<<person1.career<<endl;
	*/
	//initialising a class when we have a constructor
	Person person2("Samuel Okoth", 12, 24, "Software and web developer");
	cout<<person2.name<<endl;
	cout<<person2.numberOfFriends<<endl;
	cout<<person2.age<<endl;
	cout<<person2.career<<endl;
	return 0;
}