#include "player.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>

using namespace std;

Player::Player() : playerName(""), balance(0.0), bettingAmount(0.0), guessNumber(0), amount(0.0)
{

}

string Player::get_playerName()
{
	cout << "What's your Name : ";
	cin >> this->playerName;
	return playerName;
}

string Player::name()
{
	return playerName;
}

float Player::get_bettinfAmount() 
{
	cout << "\n\nEnter the starting balance to play game : $";
	cin >> this->balance;
	return balance;
}

float Player::setBalance()
{
	//newBalance = balance + balance;
	return balance;
}

float Player::winBalance(float amount)
{
	balance += amount;
	//balance = player.updateBalance() + player.updateBalance() * 10;
	return balance;
}

float Player::lossBalance(float amount)
{
	balance -= amount;
	//balance = player.updateBalance() + player.updateBalance() * 10;
	return balance;
}


int Player::guess()
{
	return guessNumber;
}

float Player::info()
{
	cout << "Hey, " << this->playerName << ", enter amount to bet : $";
	cin >> this->amount;
	if (bettingAmount > amount)
		cout << "Betting balance can't be more than current balance!\n"
		<< "\nRe-enter balance\n ";
	return amount;

}

float Player::playAmount()
{
	return amount;
}

void Player::rules() const
{
	system("cls");
	cout << "\t\t======LOSE YOUR MONEY NUMBER GUESSING RULES!======\n";
	cout << "\t1. Choose a number between 1 to 10\n";
	cout << "\t2. Winner gets 10 times of the money bet\n";
	cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

void Player::welcome()
{
	cout << "\n\tI think I could answer the question concerning gambling just that briefly.\n";
	cout << "\n\t\t\t\t We are against it.\n";
	cout << "\n\t\t\t(Gambling By President Gordon B.Hinckley)\n\n";
	cout << "\n\t\t\t=====WELCOME TO LOSE YOUR MONEY WORLD=====\n\n";
}

void Player::bye() const
{
	cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n";
	cout << "The love of money can be dangerous."  "\n";
	cout << "Choose wisely!!!"  "\n\n";
}