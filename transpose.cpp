#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    cout<<"Name: Ammar Ali Khan      Reg:BCY243003"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    int matrix[rows][cols] = {{1, 2}, {3, 4}};
    int transpose[cols][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "The transpose of the matrix is:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

