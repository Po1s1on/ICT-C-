#include <iostream>
using namespace std;
int main(){
	int balance;
	double withdraw;
	char choice;
	balance=1550;
	cout<<"Name:Ammar Ali Khan    Reg:BCY243003"<<endl;
do{
	cout<<"Current Balance: "<<balance<<endl;
	cout<<"Enter the amount to withdraw money: ";
	cin>>withdraw;
	if(withdraw<=balance){
		balance-=withdraw;
		cout<<"Success!"<<endl;
		cout<<"Current balance: "<<balance<<endl;
	}
	else{
		cout<<"You don't have enough balance"<<endl;
	}
	cout<<"Do you want to make another withdrawal? (y/n): ";
	cin>>choice;
	}while(choice=='y');
	cout<<"Thank you ";
	return 0;
}

