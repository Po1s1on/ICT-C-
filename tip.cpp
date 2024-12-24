#include <iostream>
using namespace std;
double Tip(double bill, double percentage) {
    return (bill * percentage) / 100;
}

int main() {
    double bill, percentage;
    cout<<"Name: Ammar Ali Khan     Reg:BCY243003"<<endl;
    cout << "Enter the bill amount: ";
    cin >> bill;
    cout << "Enter the tip percentage: ";
    cin >> percentage;
    double tip = Tip(bill, percentage);
    cout << "The tip amount is: " << tip << endl;
    cout << "The total bill amount is: " << bill + tip << endl;
    return 0;
}

