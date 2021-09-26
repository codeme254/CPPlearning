#include <iostream>
using namespace std;
int main(){
	//data_type arrayName [rows][columns] = {{colum1}, {column2}, {column..n}};
	int nums[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
	for(int i = 0; i < 5; i++){//loops rows
		for(int j = 0; j < 3; j++){//loops columns
			cout<<nums[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}