#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	int secretNum =rand()%100;
	int numberOfTrials, guess;
	string level;
	cout<<"Do you want hard or easy level: ";
	getline(cin, level);
	transform(level.begin(), level.end(), level.begin(), ::tolower);
	cout<<"Playing on the "<<level<<" level.\nGUESS ANY NUMBER BETWEEN 1 AND 100"<<endl;
	if(level == "easy"){
		numberOfTrials = 10;
	}else if(level == "hard"){
		numberOfTrials = 5;
	}
	cout<<"You have only "<<numberOfTrials<<" trials"<<endl;
	while(numberOfTrials > 0){
		cout<<"Enter a guess: ";
		cin>>guess;
		if(guess == secretNum){
			cout<<"CONGRATULATIONS! YOU WON. YOU SCORED "<<numberOfTrials<<endl;
			numberOfTrials = 0;
		}else{
			if(guess > secretNum){
				numberOfTrials--;
				if(numberOfTrials == 0){
					cout<<"SORRY, YOU LOST :( THE DIGIT WAS: "<<secretNum<<endl;
				}else{
					cout<<"TOO HIGH! Try again with  "<<numberOfTrials <<" trials remaining"<<endl;	
				}
			}else{
				numberOfTrials--;
				if(numberOfTrials == 0){
					cout<<"SORRY, YOU LOST :( THE DIGIT WAS: "<<secretNum<<endl;
				}else{
					cout<<"TOO LOW! Try again with  "<<numberOfTrials <<" trials remaining"<<endl;	
				}
			}
		}
	}
	return 0;
}