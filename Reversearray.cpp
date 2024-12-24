#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    cout<<"Name: Ammar Ali Khan    Reg:BCY243003"<<endl;
    cout<<"Enter number of list in the element: "<<endl;
    cin>>arr[size];
    for(int i =0; i<size; i++){
    	cin>>arr[i];
}
	cout<<endl;
    for (int i = 0; i < size / 2; i++) {
        arr[i] = arr[i] + arr[size - 1 - i];
        arr[size - 1 - i] = arr[i] - arr[size - 1 - i];
        arr[i] = arr[i] - arr[size - 1 - i];
    }
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

