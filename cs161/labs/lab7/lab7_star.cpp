/***********************************************************
 *  ** Program: lab7_star.cpp
 *  ** Date: 02/17/2020
 *  ** Author: Phillip Dinh
 *  ** Inputs:
 *  ** Outputs:
 *  **********************************************************/

#include <iostream>
#include <cstring>

using namespace std;


int main(){
	
	char cstr[25];
	
	float star = 0;
	
	float percent = 0;

	cout << "Enter a string with less then 20 chars: " << endl;
	cin.getline(cstr,25);


	float length = strlen(cstr);

	for (int i = 0; i < strlen(cstr); i++){
		if (cstr[i] == '*'){
			star ++;
		}
	}
	 
	percent = star/length * 100;

	cout << percent << "% " "of characters are stars" <<endl;	

	return 0;
}
