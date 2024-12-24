#include <iostream>
using namespace std;

int main() {
    double totalSales, serviceTax, localTax, totalTax, netSales;
    const double serviceTaxRate = 0.10;
    const double localTaxRate = 0.03;

    cout << "Enter the total sales for the month: ";
    cin >> totalSales;

    serviceTax = totalSales * serviceTaxRate;
    localTax = totalSales * localTaxRate;
    totalTax = serviceTax + localTax;
    netSales = totalSales - totalTax;

    cout << "Service Tax: $" << serviceTax << endl;
    cout << "Local Tax: $" << localTax << endl;
    cout << "Total Tax Collected: $" << totalTax << endl;
    cout << "Net Sales Amount: $" << netSales << endl;

    return 0;
}

