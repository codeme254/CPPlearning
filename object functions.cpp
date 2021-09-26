#include <iostream>
using namespace std;
class Calculator{
	public:
		double num1, num2;
		Calculator(double aNum1, double aNum2){
			num1 = aNum1;
			num2 = aNum2;
		}
		double add(){
			return num1 + num2;
		}
		double difference(){
			return num1 - num2;
		}
		double product(){
			return num1 * num2;
		}
		double division(){
			return num1/num2;
		}
};int main(){
	Calculator calculator1(4.5, 6.5);
	cout<<calculator1.add()<<endl;
	cout<<calculator1.difference()<<endl;
	cout<<calculator1.product()<<endl;
	cout<<calculator1.division()<<endl;
	return 0;
}