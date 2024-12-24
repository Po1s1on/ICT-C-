#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {10, 20, 4, 45, 99, 98, 56, 23, 7, 33};
    int largest = arr[0], Array = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
             Array= largest;
            largest = arr[i];
        } else if (arr[i] > Array && arr[i] != largest) {
            Array = arr[i];
        }
    }
    cout<<"Name: Ammar Ali Khan     Reg:BCY243003"<<endl;
    cout << "The second largest element in the array is: " << Array << endl;
    return 0;
}

