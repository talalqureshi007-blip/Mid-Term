#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    int choice;
    float bill,units;
    cout<<"----------Electricity Billing System----------"<<endl;
    cout<<"1. Residential Use"<<endl;
    cout<<"2. Commercial Use"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    cout<<"Enter Electricity Units: "<<endl;
    cin>>units;
    if(choice==1)
    {
    	bill=units*15;
    	cout<<"Residential Units= "<<bill<<endl;
	}
	else if(choice==2)
	{
		bill=units*30;
		cout<<"Commercial Units= "<<bill<<endl;
	}
	else
	{
		cout<<"Error"<<endl;
	}
	return 0;
}
