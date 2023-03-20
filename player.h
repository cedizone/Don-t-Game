#pragma once

#include <string>
using namespace std;

class Player
{
private:
   string playerName;
   float balance; // stores player's balance
   float bettingAmount;
   float newBalance;
   int guessNumber;
   int dice; // stores the random number
   char choice;
   float amount;

public:
   Player();
   string get_playerName();
   string name();

   float get_bettinfAmount();
   int guess();
   float info();

   float setBalance();
   float winBalance(float balance);
   float lossBalance(float balance);
   float playAmount();

   void rules() const;
   void welcome();
   void bye() const;

};

