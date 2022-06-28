/***********************************************************
 *  ** Program: lab7_rainfall.cpp
 *  ** Date: 02/17/2020
 *  ** Author: Phillip Dinh
 *  ** Inputs:
 *  ** Outputs:
 *  **********************************************************/

#include <iostream>

using namespace std;

int cities;

float avg;

int main(){
	cout << "Enter how many cities: " << endl;
	cin >> cities;

	float cityarr[cities];

	for (int i = 1; i < cities + 1; i++){
		cout << "How much rainfall (inches) is in city " << i << " : " << endl;		
		cin >> cityarr[i];
	}
	
	for (int i = 0; i < cities +1; i++){
		avg += cityarr[i];	
	}
	
	avg /= cities;
	
	cout << "average rainfall is " << avg << " inches." << endl;

	return 0;
}	
