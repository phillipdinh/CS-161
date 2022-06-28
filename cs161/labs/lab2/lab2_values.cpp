/****************************************************
 ** Program: lab2_values.cpp
 ** Authors: Phillip Dinh
 ** Date: 01/15/2020
 ** Description Calculate min/max values.
****************************************************/

	#include <iostream>
	#include <cmath>	

	using namespace std;

int main()

{
	unsigned int bits;

	unsigned int max_unsigned;

	int max_signed;

	int min_signed;

	int max_int;	
	
	int min_int;
	

	cout << "Enter the number of bits b: ";
	cin >> bits;

	
	max_unsigned = pow (2, bits) - 1;
	cout << "Maximum unsigned value is: " << max_unsigned << endl;	


	max_signed = pow (2, bits - 1 ) - 1;
	cout << "Maximum signed value is: " << max_signed << endl;	


	min_signed = pow (-2, bits - 1);
	cout << "Minimum signed value is: " << min_signed << endl;	


	max_int = max_signed + 1;
	cout << max_int << endl;

	min_int = min_signed -1 ;
	cout << min_int << endl;


	

	return 0;
}
