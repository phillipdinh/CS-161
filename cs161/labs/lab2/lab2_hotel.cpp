	#include <iostream>
	#include <cstdlib>
	#include <ctime>


	using namespace std;

int main ()

{
	
	int hotel_floor;


	
	srand(time(NULL)); 

	hotel_floor = rand () % 6;

	cout << hotel_floor << endl;


	if (hotel_floor == 0)
	{
		cout << "You're on the ground level" << endl;
	}	
	
	else if (hotel_floor == 1 || hotel_floor == 3 || hotel_floor == 5)
	{
		cout << "You're on an odd level" << endl;
	
		if (hotel_floor == 5)
		{
			cout << "and the penthouse!" << endl;
		}
	}

	else if (hotel_floor == 2 || hotel_floor == 4)
	{
		cout << "Youre on an even level" << endl;
	}


	return 0;
}
