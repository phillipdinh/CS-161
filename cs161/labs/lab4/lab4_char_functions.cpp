/**********************************************************
 * Program: lab4_char_functions.cpp
 * Date: 01/29/2020
 * Author: Phillip Dinh
 * Description:
 *********************************************************/


#include <iostream>

using namespace std;

char lower_case_vowel;

int is_vowel (char c){

    lower_case_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
    
    if (lower_case_vowel){
        cout << "True" << endl;
        return true;
    }
    cout << "False" << endl;
    return false;
}

void swap_case(char c){

    if (c >= 'a' && c <= 'z'){
        c -= 32;

        cout << c << endl;

    }

    else if (c >= 'A' && c <= 'Z'){
        
        c += 32;

        cout << c << endl;

    }

    else {
        cout << "invalid input" << endl;

        //return 1;
    }

}





int main(){
    char c;

    is_vowel ( c = 'a'); 
    is_vowel ( c = 'A');
    is_vowel ( c = 'P'); 
    is_vowel ( c = '2'); 
    is_vowel ( c = 'o'); 

    swap_case ( c = 'a'); 
    swap_case ( c = 'A');
    swap_case ( c = 'P'); 
    swap_case ( c = '2'); 
    swap_case ( c = 'o'); 
    return 0;
}