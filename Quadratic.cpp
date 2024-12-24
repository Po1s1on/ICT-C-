#include <iostream>
#include <math.h>
using namespace std;
void quadratic(double a, double b, double c, double &root1, double &root2, bool &Roots) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        Roots = true;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    } else {
        Roots = false;
    }
}

int main() {
    double a, b, c;
    double root1, root2;
    bool Roots;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    quadratic(a, b, c, root1, root2, Roots);
    if (Roots) {
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    } else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}

