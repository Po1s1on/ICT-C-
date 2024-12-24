#include <iostream>
using namespace std;

int main() {
    int Rented;
    double miles, total;
    const double Dailyrate = 50.0;
    const double Mileacharges = 0.20;
    cout << "Enter the number of days the car was rented: ";
    cin >> Rented;
    cout << "Enter the total miles driven: ";
    cin >> miles;
    total= (Rented * Dailyrate) + (miles * Mileacharges);
    cout << "Total rental cost: $" << total << endl;
    return 0;
}

