#include <iostream>
using namespace std;
int add(int, int);
int main(){
	int number1, number2;
	cout<<"Enter the first digit ";
	cin>>number1;
	cout<<"Enter the second digit ";
	cin>>number2;
	int result = add(number1, number2);
	cout<<"The sum of "<<number1<<" and "<<number2<<" is "<<result<<endl;
	return 0;
}
int add(int num1, int num2){
	return num1+num2;
}