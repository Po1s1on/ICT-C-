 #include <iostream>
 using namespace std;
 int main(){
 	int n1,n2;
 	cout<<"Name: Ammar Ali Khan        Reg:BCY243003"<<endl;
 	cout<<"Enter first number: ";
 	cin>>n1;
 	cout<<"Enter second number: ";
 	cin>>n2;
 	if(n1%2==0 && n2%2==0){
 		cout<<"The two numbers are even so the result is: "<<n1+n2<<endl;
 	}
 	  else if(n1%1==0 && n2%1==0){
 		 cout<<"The two numbers are prime so the result is: "<<n1-n2<<endl;
 	  }
 	    else{
 		    cout<<"Invalid numbers";
 	}
    return 0;
}
