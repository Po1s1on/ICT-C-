#include <iostream>
using namespace std;
int main(){
	int  a,b,c;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter third number: ";
	cin>>c;
	if(a>b && a>c){
		cout<<"a is greater than both: "<<endl;
	}
	else if(b>a && b>c){
		cout<<"b is greater than both "<<endl;
	}
	else if(c>a && c>b){
		cout<<"c is greater than both"<<endl;
	}
 return 0;
}
