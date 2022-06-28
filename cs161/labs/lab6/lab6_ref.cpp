/***********************************************************
 ** Program: lab6_ref.cpp
 ** Date: 02/12/2020
 ** Author: Phillip Dinh
 ** Inputs:
 ** Outputs:
 ***********************************************************/
#include <iostream>
#include <string>


using namespace std;
	

void count_punctuation(string s, int& n_periods, int& n_commas)
	{		
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '.'){
			n_periods ++;
		}
		else if (s[i] == ','){
			n_commas ++;
		}			
	}
}

void count_punctuation2(string s, int* n_periods, int* n_commas)
	{
	for (int i = 0; i < s.length(); i++){
		if (s[i] == ','){
			*n_periods ++;
		}
		else if (s[i] == '.'){
			*n_commas ++;
		}
	}
}	
int main()
{
	int periods = 0;
	
	int commas = 0;

	string string_in;

	cout << "Write a sentence: " << endl;
	getline(cin, string_in);

	count_punctuation(string_in, periods, commas);

	cout << "There were " << periods << " periods and " << commas << " commas." << endl;

	count_punctuation2(string_in, &periods, &commas);	
	
	cout << "There were " << periods << " periods and " << commas << " commas." << endl;


	
	return 0;
}	
