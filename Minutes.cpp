#include <iostream>
using namespace std;
int main()
{
	int mins,day;
	cout<<"Name:Ammar Ali Khan    Reg:BCY243003"<<endl;
	cout<<"Enter a number in minutes: ";
	cin>>mins;
	day=mins/1440;
	if(mins>= 1440){
		cout<<"It is in days"<<endl;
	}
	else{
		cout<<"It is less than 1440"<<endl;
	}
	return 0;
}
