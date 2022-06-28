/********************************
** buggyCode.cpp
** 01/29/2020
** Phillip Dinh
** Fix the bugs in the code
********************************/
#include <iostream>

using namespace std;

int main(){

	int y=3;
	int  x;
	char myAnswer;
	bool again;
	int num;
	char  myanswer;

	cout << "y is set to: " << y << endl;

	cout << "Please input a number: ";
	cin >>  x;
	

	again = true;

	do 
	{
		if(x > y){
			cout << "X is greater than Y\n" << endl;
			cout << "Would you like to input anther number" << endl;
			cin >> again; 
		}
		else{
			cout << "X is less than Y\n" << endl;
			cout << "Would you like to input anther number" << endl;
			cin >> again; 
	
		again = false;
		}
	}while (again);


	for(x = 0; x < 10; x++){

		cout << x << endl;
	}	
		cout << "What number would you like to find the factorial for? " << endl;
		cin >> num;

	int factorial;


	factorial = num;

	for(int x = num; x > 1; x--){
		factorial *= x-1;
		cout << factorial << endl;
	}
		cout << "Are you enjoying cs161? (y or n) " << endl;
		cin >> myanswer;
	
		if(myanswer == y){
		cout << "YAY" << endl;
	}
	else{
		cout << "YOU WILL SOON!" << endl;
	}
	return 0;
}
