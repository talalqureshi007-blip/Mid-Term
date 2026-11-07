#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float num1,num2;
	char op;
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	cout<<"Enter second number: "<<endl;
	cin>>num2;
	cout<<"Enter the operator: "<<endl;
	cin>>op;
	switch(op)
	{
		case'+':
		cout<<"Addition ="<<num1+num2<<endl;
		break;
		case'-':
			cout<<"Subtraction ="<<num1-num2<<endl;
			break;
			case'*':
				cout<<"Multiplication= "<<num1*num2<<endl;
				break;
				case'/':
					if(num2!=0)
					cout<<"Division ="<<num1/num2<<endl;
					else
					{
						cout<<"Cannot divide by 0"<<endl;
					}
					break;
					default:
						cout<<"Invalid Operator";
						
	}
	return 0;
}
