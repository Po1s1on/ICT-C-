#include <iostream>
using namespace std;
int main(){
	char subject;
	cout<<"Name: Ammar Ali Khan     Reg:BCY243003"<<endl;
	cout<<"Enter the number of your subject to view its marks: ";
	cin>>subject;
    switch(subject){
    	case '1':
    		  cout<<"Maths: 15"<<endl;
    		  break;
        case'2':
        	   cout<<"Physics: 10"<<endl;
        	   break;
        case '3':
        	   cout<<"Eng: 14"<<endl;
        	    break;
    	case '4':
    		    cout<<"PK Studies: 15"<<endl;
    		    break;
    	case '5':
    		   cout<<"ICT: 16"<<endl;
    		   break;
    	default:
    		cout<<"Invalid number";
    		break;
}
return 0;
}
