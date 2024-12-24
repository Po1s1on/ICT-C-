#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
  char choice;
  int Guess, Outcome;
  
  srand(time(0));
  
  do{
  	Outcome = rand() % 6 + 1;
  	cout<<"Roll the dice outcome (1-6): "<<endl;
  	cin>>Guess;
  	if (Guess == Outcome)
  	{
  		cout<<"You Win!"<<endl;
	  } else{
	  	   cout<<"You Lose!"<<endl;
	  }
	  cout<<"Press 'y' to repeat, any other key to exit"<<endl;
	  cin>>choice;
  } while (choice == 'y'|| choice == 'Y');
	return 0;	
}
