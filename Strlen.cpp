#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[50], str2[50];
	cout<<"Enter first string: ";
	cin.getline(str1,50);
	cout<<"Enter second string: ";
	cin.getline(str2,50);
	if(strlen(str1) == strlen(str2)){
	cout<<"These two strings are same"<<endl;
	}
	else {
		cout<<"These two strings are not same"<<endl;
	}
	return 0;
}
