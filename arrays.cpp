#include <iostream>
using namespace std;
int main(){
	int data [] = {10, 20, 30, 40};
	int sizeArray = sizeof(data)/sizeof(data[0]);
	cout<<sizeArray<<endl;
	int numbers[] = {10, 3, 13, 22, 11, 24};
	cout<<numbers[0]<<endl; //10
	cout<<numbers[1]<<endl; //3
	
	//to get the length of an array in c++
	//take the size assigned for the array in the memory 
	//divide that by the size assigned in the memory for individual element
	int lengthOfNums = sizeof(numbers)/sizeof(numbers[2]);
	cout<<lengthOfNums<<endl; //returns 6 which is the numbers of elements in numbers array
	
	//looping through all elemnts in an array an printing them
	int index = 0;
	for(index; index<sizeof(numbers)/sizeof(numbers[1]); index++){
		cout<<"printing numbers "<<numbers[index]<<endl;
	}
	return 0;
}