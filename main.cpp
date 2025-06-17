#include <iostream>
using namespace std;

int main (){
char repeat;
}

do{
  int balance = 5000;
  int withdraw;
  
          // 1. FOR LOOP – Last 5 Transactions // yeh foor loop wala section hai jis mein hum log is ko loop karin gy 5 tak taky 5000 tak ki transactions history print ho 
  cout<<"\nLast 5 Transaction: \n";
  for(int i = 5; i<=5 ;i++){
  cout << "transaction" <<i<< ":Rs."<<i*100<<endl;
  }// there the for loop is done!

// now we need to add while loop where we need deal with withdarw the money! 

cout<<"\nBalance:Rs."<<balance<<endl;
cout<<"Enter the amount of withdraw (0 to stop):";
cin>>withdraw;
  
  while(withdraw!=0 && balance >= withdraw){
  
balance-=withdraw;
cout <<"Withdraw: Rs.  "<<withdraw<<",New Balance : Rs."<<balance<<endl;  

if(balance == 0){
cout << " balance is empty!\n";
break;
}

cout<< " Enter the amount of withdraw (stop press 0):";
cin>>withdraw 
  
}

// Now this is last part of the code where we use the Do While loop 
// Asking the customer do you want another transaction ? mean Reapeat ATM

cout<<"\nDo You Want to Use The ATM Again ?" (Y/N): ;
cin>>repeat;
}while(repeat=='Y')

return 0;
}

//finaling the project 


