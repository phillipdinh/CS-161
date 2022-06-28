/***********************************************************
 *  ** Program: 
 *  ** Date: 
 *  ** Author: Phillip Dinh
 *  ** Inputs:
 *  ** Outputs:
 *  **********************************************************/

#include <iostream>

using namespace std;

/****************************************
 * Function: plus_10_value
 * Description: takes input and adds 10
 * Parameters: int n
 * Pre-Conditions: Need input from user
 * Post-Conditions: n will increase by 10
 * **************************************/
int plus_10_value(int n){

  n += 10;

  return n;
}
/****************************************************
 * Function plus_10_red 
 * Description: Takes input and adds 10
 * Parameres: int& n
 * Pre-Conditions: Need input from user
 * Post-Conditions: No return modifies call variable
 * **************************************************/
void plus_10_red(int& n){
	n += 10;	
}

int main(){

  int number;
  cout << "Enter an integer: " << endl;
  cin >> number;


  int m;
  cout << "Enter an integer: " << endl;
  cin >> m;

  int  output = plus_10_value(number);
  cout << "Your number plus 10 is " << output  << endl;

  plus_10_red(m);

  cout << " Your number plus 10 is " << m << endl;

  return 0;

}
