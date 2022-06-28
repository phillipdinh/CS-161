#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool fun(int a[][3], int size){

	int top  =				a[0][0] + a[0][1] + a[0][2];
	int middlerow =		a[1][0] + a[1][1] + a[1][2];
	int right =				a[2][0] + a[2][1] + a[2][2];
	int left =				a[0][0] + a[1][0] + a[2][0];
	int middlecol =		a[0][1] + a[1][1] + a[2][1];
	int bottom =			a[2][0] + a[2][1] + a[2][2];
	int leftdiag =		a[0][0] + a[1][1] + a[2][2];
  int rightdiag	=		a[2][0] + a[1][1] + a[0][2];

	if ((top == middlerow) && (right ==  left) && (middlecol ==  bottom) && (leftdiag == rightdiag)){
		size = true;
	}
	else{
		size = false;
	}
		return size;
}		

int main(){

	bool size;

	srand(time(NULL));

	int box[3][3];

	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j ++){
			box[i][j] = (rand()%2);
		}
	}

	for (int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout << box[i][j];
		}
	cout << endl;
	}
	bool magic;
	magic = fun(box,size);

	cout << magic  << endl;
}
