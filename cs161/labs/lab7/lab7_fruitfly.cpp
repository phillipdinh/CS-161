/***********************************************************
 *  ** Program: fruitfly.cpp
 *  ** Date: 02/19/2020
 *  ** Author: Phillip Dinh
 *  ** Inputs:
 *  ** Outputs:
 *  **********************************************************/

#include <iostream>

using namespace std;

int main(){
	int jars [5];
	int largest = 0;
	int smallest;
	int largest_jar[1];
	int smallest_jar[1];
	largest_jar[0] = 0;
	smallest_jar[0] = 99999;

	for (int i = 1; i < 6; i++){
		cout << "How many fruit flies jar " << i << ": " << endl;
		cin >> jars[i];
	}

	for (int i = 1; i < 6; i++){
		if (largest_jar[0] < jars[i]){
			largest_jar[0] = jars[i];
			largest = i;			
		}
	}

	for (int i = 1; i < 6; i++){
		if (smallest_jar[0] > jars[i]){
			smallest_jar[0] = jars[i];
			smallest = i;
		}
	}

	cout << "The largest jar is jar " << largest << endl;
	cout << "The smallest jar is jar " << smallest << endl;
	
return 0;
}
