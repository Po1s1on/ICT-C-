#include <iostream>
using namespace std;
int main(){
  char operation;
  int n1,n2;
  cout<<"Name: Ammar Ali Khan    Reg:BCY243003"<<endl;
  cout<<"Enter first number: ";
  cin>>n1;
  cout<<"Enter second number: ";
  cin>>n2;
  cout<<"Enter a choice(+,-,*,/): ";
  cin>>operation;
  switch(operation){
  	case '+':
  	    cout<<"The addition will be: "<<n1+n2<<endl;
  	    break;
  	case '-':
	    cout<<"The subtraction will be: "<<n1-n2<<endl;
		break;
	case '*':
	    cout<<"The multiplicationn will be: "<<n1*n2<<endl;
		break;
	case '/':
	    cout<<"The division will be: "<<n1/n2<<endl;
		break;
	default:
	    cout<<"Invalid choice"<<endl;
		break;   
  }
  return 0;
}

