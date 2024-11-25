#include <iostream>
#include "Calc.h"
using namespace std;

int main(void){
	cout << "SCIENTIFIC CALCULATOR IN C++\n";
	string menu = "1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.POWER\n6.LOG\n7.SQRT\n8.SIN\n9.COS\n10.TAN\n";
	bool flag = false;
	double a,b;
	double choice;
	while (flag == false){
		cout << menu;
		cout << "Enter choice. (-1 to exit/quit)\n";
		cin >> choice;

		if (choice <= 5){
			cout << "\n";
			cout << "Enter numbers seperated by a space.\n";
			cin >> a >> b;
			cout << "\n";
		}
		else{
			cout << "\n";
			cout << "Enter number/angle.\n";
			cin >> a;
			cout << "\n";

		}
		
		switch(static_cast<int>(choice)){
			case (1): cout << basic_ops::addition(a,b) << "\n";break;
			case (2): cout << basic_ops::subtraction(a,b)<< "\n";break;
			case (3): cout << basic_ops::multiplication(a,b)<< "\n";break;
			case (4): cout << basic_ops::division(a,b)<< "\n";break;
			case (5): cout << advanced_ops::power(a,b)<< "\n";break;
			case (6): cout << advanced_ops::log(a)<< "\n";break;
			case (7): cout << advanced_ops::sqrt(a)<< "\n";break;
			case (8): cout << advanced_ops::sin(a)<< "\n";break;
			case (9): cout << advanced_ops::cos(a)<< "\n";break;
			case (10): cout << advanced_ops::tan(a)<< "\n";break;
			case (-1): flag = true; break;
		}
		
		cout << "\n";
 	}
 	
	return 0;
}
