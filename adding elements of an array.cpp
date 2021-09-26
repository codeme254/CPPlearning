#include <iostream>
using namespace std;
int main(){
	int elements [] = {10, 13, 23, 12, 15, 18, 27, 89, 234, 76, 90, 102};
	int arrSize = sizeof(elements)/sizeof(elements[3]), index = 0, sum = 0;
	for(index; index < arrSize; index++){
		sum += elements[index];
	}
	cout<<"The sum is: "<<sum<<endl;
	return 0;
}