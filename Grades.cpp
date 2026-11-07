#include "iostream"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int marks;
	cout<<"Enter Marks: "<<endl;
	cin>>marks;
	if(marks>100)
	{
		cout<<"Invalid Operation"<<endl;
	}
	else if(marks>=90)
	{
		cout<<"Grade A+"<<endl;
	}
	else if(marks>=80)
	{
		cout<<"Grade B"<<endl;
	}
	else if(marks>=70)
	{
		cout<<"Grade C"<<endl;
	}
	else if(marks>=60)
	{
		cout<<"Grade D"<<endl;
	}
	else
	{
		cout<<"Fail"<<endl;
	}
	return 0;
}
