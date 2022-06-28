#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void fun(int* a, int size){

  int ones = 0;
  int zeros = 0;

	for( int i = 0; i < size; i++){
		if( a[i] == 1){
		  ones ++;
		}
		else{
		  zeros ++;
		}
	}

  cout << "Ones: " << ones << " Zeros: " << zeros << endl;
}

int main(){

srand(time(NULL));

int size;

cout << "Enter size of array: " << endl;
cin >> size;

int*  array = new int[size];


for(int i = 0; i < size; i++){
	array[i] = (rand() % 2);
}

fun(array, size);
delete [] array;
return 0;
}
