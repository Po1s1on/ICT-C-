#include <iostream>
using namespace std;
int main()
{
	int N, first=0, second=1, next;
	cout<<"Enter a number:"<<endl;
	cin>>N;
	cout<<"Fibonacci Series:"<<endl;
for (int i = 0; i < N; i++) {
        if (i == 0) {
            cout << first << " "; 
        } else if (i == 1) {
            cout << second << " ";  
        } else {
            next = first + second;  
            cout << next << " ";
            first = second;         
            second = next;         
        }
    }
    
    cout << endl;
    return 0;
}
