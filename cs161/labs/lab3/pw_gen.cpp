/***********************************************************
 ** Program:pw_gen.cpp 
 ** Date: 01/22/2020
 ** Author: Phillip Dinh
 ** Description: Random Password Generator
 **********************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()

{

	srand(time(NULL));

	unsigned int pw_len;

	unsigned int letter_len;

	unsigned int up_len;

	unsigned int num_num;

	unsigned int num_low;

	string password;


	cout << "Welcome to Password Creator" << endl;

	cout << "How many characters long do you want your password? (out of 10) " << endl;
	cin >> pw_len;

	while (pw_len <= 1)
	{
		cout << pw_len << "is not a good number!" << endl;
		cout << "Enter a number greater than 1: " ;
		cin >> pw_len;
		
		break;
	}


	cout << "How many letters do you want in your password? (out of 10) " << endl;
	cin >> letter_len;

	while (letter_len <= 1)
	{
		cout << letter_len << "is not a good number!" <<endl;
		cout << "Enter a number greater than 1: " ;
		cin >> letter_len;
		break;
	}


	cout << "How many letters do you want upper-case? (out of 5) "  << endl;
	cin >> up_len;
	
	
	while (up_len <=1)
	{
		cout << up_len << "is not a good number!" << endl;
		cout << "Enter a number greater than 1: " ;
		cin >> up_len;
		break;
	}

	num_num = pw_len - letter_len;
	
	num_low = letter_len - up_len;


	for (int i=0; i < up_len; i++)
	{
		char num_upper = rand() % 26 + 'A';
		password += num_upper;
	}

	for (int i=0; i < num_low; i++)
	{
		char num_lower = rand() % 26 + 'a';
		password += num_lower;
	}
	

	for (int i=0; i < num_num; i++)
	{

		char num_number = rand() % 10 + 48;
		password += num_number;

 	
	}

	cout << password << endl;


	return 0;
}
