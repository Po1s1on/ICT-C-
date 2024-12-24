#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[50];
	int length,vowels;
	cout<<"Enter a string(50):";
	cin.getline(str,50);
	length = strlen(str);
	for(int i = 0; i < length; i++){
		char ch=str[i];
	 if (ch == 'a'|| ch =='e'|| ch == 'i'|| ch =='o'|| ch =='u')
	 vowels++;
   }
cout<<"Number of vowels in this string is: "<< vowels <<endl;
return 0;
}
