#include <iostream>
using namespace std;
int main(){
   int rows,col;
   cout<<"Name: Ammar Ali Khan    Reg: BCY243003"<<endl;
   cout<<"Enter the number of rows: ";
   cin>>rows;
   cout<<"Enter the number of columns: ";
   cin>>col;
   for(int i=0;i<rows;i++){
   	 for(int j=0;j<col; j++){
   	 	cout<<"*";
		}
		cout<<endl;
   }
   return 0;
}

