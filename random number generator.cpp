#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
int main(){
	srand(time(NULL));
	int randNum = rand()%100;
	cout<<randNum;
}