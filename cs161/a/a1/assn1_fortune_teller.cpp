/*****************************************************
 ** Program: assn1_fortune_teller.cpp
 ** Author: Phillip Dinh
 ** Date: 01/13/2020
 ** Description: Give a fortune utilizing user inputs
 ** Input: 5 numbers from the user
 ** Output: 3 sentences of fortunes using the 5 numbers
 ******************************************************/

	#include <iostream>

	using namespace std; /* So we don't have to write std:: before every cout and cin. */

int main() 
{
	// Minimum value 0. Maximum value 65,535.
	// The number of kids someone has can not be negative.
	// The unsigned short is the smallest data type with 65,535 max which is more than enough.

	unsigned short kids;
	
	// Minimum Value 0. Maximum value 65,535.
	// The number of partners someone has can not be negative.
	// The unsigned short is the smallest data type with 65,535 max which is more than enough.

	unsigned short partners;

	// Minimun value 2.2e-308. Maximum value 1.8e308.
	// The amount of money someone can possess or be in debt to is almost infinite but must also be a decimal.
	// Double is the largest data type that allows decimals.

	double  wealth;

	// Minimum value 0. Maximum value 4,294,967,295.
	// The number of marbles one can possess can not be negative.
	// 4 billion marbles is more than enough marbles for one person.

	unsigned int marbles;

	// Minimum value 0. Maximum value 4,294,967,295.
	// The number of marbles one can possess can not be negative.
	// 4 billion marbles is more than enough marbles for one person.

	unsigned int rocks;



	// Takes input from user

	cout << "Enter a small positive number: ";
	cin >> kids;

	cout << "Enter a small positive number: ";
	cin >> partners;

	cout << "Enter any positive or negative number: ";
	cin >> wealth;

	cout << "Enter a positive number: ";
	cin >> marbles;

	cout << "Enter a positive number: ";
	cin >> rocks;	

	// Prints fortune using numbers from user

	cout << "1. You will have " << kids << " kids with " << partners << " partners." << endl;

	cout << "2. Your wealth will change by $" << wealth << "." << endl;

	cout << "3. Throughout your life you will have " << marbles << " marbles and " << rocks << " rocks." << endl;



	return 0;
}
