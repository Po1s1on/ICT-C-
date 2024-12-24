#include <iostream>
using namespace std;
int main()
{
	int n,i=1,factorial=1;
	cout<<"Name: Ammar ALi Khan     Reg:BCY243003"<<endl;
	cout<<"Enter a number: ";
	cin>>n;
	while(i <= n)
	{
		factorial*=i;
		i++;
	}
	cout<<"Factorial of "<< n << " is "<< factorial <<endl;
	return 0;
}
