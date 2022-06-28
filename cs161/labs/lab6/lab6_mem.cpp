/***********************************************************
 *  ** Program: lab6_mem.cpp
 *  ** Date: 02/12/2020
 *  ** Author: Phillip Dinh
 *  ** Inputs:
 *  ** Outputs:
 *  **********************************************************/

#include <iostream>

using namespace std;

int* create_int(){
	int* ptr = new int;
	return ptr;
}

void create_int2(int*& ptr){
	ptr = new int;			
}

void create_int3(int** ptr){
	*ptr = new int;	

}
int main(){
	int *ptr2;
	
	create_int2(ptr2);		
	delete ptr2;

	int *ptr3;
	
	create_int3(&ptr3);
	delete ptr3;
}

