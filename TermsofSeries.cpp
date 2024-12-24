#include <iostream>
using namespace std;
int main() {
    const int size = 20;
    float series[size];
    for (int i = 1; i <= size; ++i) {
        series[i - 1] = 1.0f / (i * i);
    }
    cout << "Series terms:"<<endl;
    for (int i = 0; i < size; ++i) {
        cout << fixed << setprecision(4) << series[i] << " "<<endl;
    }
    return 0;
}

