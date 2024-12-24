#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
if (num%1==0)
cout<<"The number is a prime number"<<endl;
else if(num%2==0){
	cout<<"The number is not a prime number"<<endl;
}
else{
	cout<<"Invalid number";
}
return 0;

}
