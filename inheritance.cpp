#include <iostream>
using namespace std;
class Developer{
	public:
		int priLanguage(){
			cout<<"We have primary programming languages"<<endl;
		}
		int mustKnow(){
			cout<<"We have must know programming languages"<<endl;
		}
		int commSkills(){
			cout<<"Communication skills are important"<<endl;
		}
};
class SeniorDeveloper : public Developer{
	public:
		int experience(){
			cout<<"More than 10 years of experience"<<endl;
		}
};
int main(){
	SeniorDeveloper zaph;
	cout<<zaph.priLanguage();
	return 0;
}