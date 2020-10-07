#include <iostream>
#include "Dice.h"
using namespace std;

int main()
{
Die Game;
char user_choice;
int computer_total=0;
int user_total=0;

  cout << "Let's play a game of 21!" << endl;
  cout << endl;
  cout << "--------------------------------------"<<endl;

 cout << "Would you like to roll the dice?" << endl;
 cout << "Enter Y for yes N for no. ";
 cin >> user_choice;
 while(user_choice == 'Y') {
   Game.roll();
   computer_total +=Game.getValue();

   Game.roll();
   user_total+=Game.getValue();


    cout << "You have " << user_total << " points."<< endl;
    if (computer_total > 21 && user_total > 21)
    {
       cout << "The computer have " << computer_total << " points."<< endl;
       cout << "Both you and the computer is over 21 no one wins." << endl;
       break;
     }

   cout << "Would you like to roll the dice?" << endl;
   cout << "Enter Y for yes N for no. ";
   cin >> user_choice;
}
 while (user_choice == 'N')
  cout << "You have " << user_total << " points."<< endl;

  break;
}



if (computer_total <=21 && computer_total>user_total)
{
  cout << "The computer have " << computer_total << " points."<< endl;
cout << "The computer wins." << endl;
}

else if (user_total <=21 && computer_total<user_total)
{
  cout << "The computer have " << computer_total << " points."<< endl;
cout << "You win." << endl;
}

else if (user_total == computer_total){
  cout << "The computer have " << computer_total << " points."<< endl;
 cout << "It is a draw, no one wins" << endl;
}





  return 0;
}
