/***********************************************************
 * Program: test.cpp
 * Date: 01/22/2020
 * Author: Phillip Dinh
 * Description:
 * ********************************************************/

	#include <iostream>

	using namespace std;

int main()

{

	unsigned int vim;
	


	cout << "Do you like vim as an editor?: 1 or 2 ";
	cin >> vim;

	if (vim == 1)
	{
		cout << "You love vim" << endl;
	}
	else if (vim ==2)
	{
		cout << "You hate vim" << endl;	


	}
	return 0;

}
