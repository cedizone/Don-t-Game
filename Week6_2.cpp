// Week6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include <iomanip>
#include "player.h"
#include <ios>

using namespace std;

Player player;

int main()
{

   
   int guessNumber;
   int dice; // stores the random number
   char choice;
   //float Player::balance = 0.0;
   srand(time(0)); // "Seed" the random generator

   player.welcome();

   player.get_playerName();

   system("cls");
   player.rules();
   player.get_bettinfAmount();
   // Get player's betting balance

   do
   {
      system("cls");
      player.rules();
      // Get player's betting balance
      do
      {
         player.info();
      } while (player.setBalance() < player.playAmount());
      // Get player's numbers
      do
      {
         cout << "Guess any betting number between 1 & 10 : ";
         cin >> guessNumber;
         if (guessNumber <= 0 || guessNumber > 10)
            cout << "\nNumber should be between 1 to 10\n"
            << "Re-enter number:\n ";
      } while (guessNumber <= 0 || guessNumber > 10);
      dice = rand() % 10 + 1;
      if (dice == guessNumber)
      {
         cout << "\n\nYou are in luck!! You have won $ " << player.playAmount() * 10;
         //player.winBalance(player.playAmount());
         cout << "\nThe winning number was : " << dice << "\n";
         cout << "\n" << player.name() << ", You have balance of $ " << player.winBalance(player.playAmount() * 10) << "\n";
      }
      else
      {
         cout << "Oops, better luck next time !! You lost $ " << player.playAmount() << "\n";
         //balance = player.updateBalance() - player.playAmount();
         //player.lossBalance(player.playAmount());
         cout << "\nThe winning number was : " << dice << "\n";
         cout << "\n" << player.name() << ", You have balance of $ " << player.lossBalance(player.playAmount()) << "\n";
      }
      //balance = player.updateBalance();
      if (player.setBalance() == 0)
      {
         cout << "You have no money to play ";
         break;
      }
      cout << "\n\n-->Do you want to play again (y/n)? ";
      cin >> choice;
   } while (choice == 'Y' || choice == 'y');
   player.bye();
   return 0;
};
