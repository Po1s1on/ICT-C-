#include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Name: Ammar Ali Khan    Reg:BCY243003"<<endl;
	cout<<"Enter your marks: ";
	cin>>marks;
	if( marks>=33 && marks <=100 ){
		cout<<"You passed"<<endl;
	}
	else if(marks<=33){
		cout<<"You failed"<<endl;
	}
	else{
		cout<<"Invalid number"<<endl;
	}
	return 0;
}
