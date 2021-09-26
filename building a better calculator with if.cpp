#include <iostream>
using namespace std;
int addDigits(int, int);
int findDifference(int, int);
int findProduct(int, int);
int division(int, int);
int main(){
	int num1, num2;
	char op;
	cout<<"Enter the first digit: ";
	cin>>num1;
	cout<<"Enter the operator: ";
	cin>>op;
	cout<<"Enter the second digit: ";
	cin>>num2;
	if(op == '+'){
		cout<<"The sum is: "<<addDigits(num1, num2)<<endl;
	}else if(op == '-'){
		cout<<"The difference is: "<<findDifference(num1, num2)<<endl;
	}else if(op == '*'){
		cout<<"The product is: "<<findProduct(num1, num2)<<endl;
	}else if(op == '/'){
		cout<<"The result of division is: "<<division(num1, num2)<<endl;
	}else{
		cout<<"Invalid Operator!!!!"<<endl;
	}
}
int addDigits(int num1, int num2){
	return  num1+num2;
}
int findDifference(int num1, int num2){
	return num1-num2;
}
int findProduct(int num1, int num2){
	return num1*num2;
}
int division(int num1, int num2){
	return num1/num2;
}