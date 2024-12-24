#include <iostream>
using namespace std;
int GCD(int a, int b) {
    while (b != 0) {
    	int temp = b;
        b = a % b;
        a= temp;
    }
    return a;
}

int main() {
    int n1, n2;
    cout<<"Name: Ammar Ali Khan     Reg:BCY243003"<<endl;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    int gcd = GCD(n1, n2);
    cout<<"GCD of: "<< n1 <<" and "<< n2 <<" is: "<< gcd; 
    return 0;
}

