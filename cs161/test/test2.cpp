#include <iostream>

using namespace std;

void fun(char* a){

	for(int i = 0; i < 256; i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
		else if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] -= 32;
		}
	}
}



int main(){

char word[256];

cout << "Enter string: " << endl;
cin.getline(word,256);

fun(word);

cout << word;
}
