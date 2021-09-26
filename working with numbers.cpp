#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<<5.5+9<<endl;
	cout<<10/3<<endl; //returns 3, not 3.333
	cout<<10/3.0<<endl;//3.333
	
	cout<<pow(2, 5)<<endl; //32 ie 2*2*2*2*2
	cout<<sqrt(25)<<endl; //5 the square root
	cout<<round(4.1)<<endl; // returns 4
	cout<<round(4.7)<<endl; // returns 5
	cout<<ceil(4.1)<<endl; // returns 5 irregardless of what we haveafter the decimal
	cout<<floor(4.888)<<endl;//returns 4
	cout<<fmax(3, 10)<<endl; //returns the biggest which is 10
	cout<<fmin(4, 20)<<endl;//returns the minimum which is 4
	return 0;
}