#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter a number:"<<endl;
	cin>>num1;
	cout<<"Enter a second number:"<<endl;
	cin>>num2;
	cout<<"Enter a third number:"<<endl;
	cin>>num3;
	if(num1 <= num2 && num1 <= num3)
	{
		cout<<"Minimum number:"<<num1;
	} 
	else if(num2 <= num1 && num2 <= num3) 
	{
		cout<<"Minimum number:"<<num2;
	}
	else 
	{
		cout<<"Minimum number:"<<num3;
	}
	return 0;
}
