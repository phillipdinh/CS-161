/***********************************************************
 ** Program: assign4_text.cpp
 ** Date: 02/23/2020
 ** Author: Phillip Dinh
 ** Inputs: Inital string and string modification choice.
 ** Outputs: String modification
 **********************************************************/
#include <iostream>
#include <cstring>

using namespace std;

/**********************************************************
** Function: char* strip_string
** Description: Takes input and strips non letter characters
** Parameters: const char* text
** Pre-Conditions: Input taken from user and user selects '1'
** Post-Conditions: New char array is made for 'strip'
**********************************************************/
char* strip_string(const char* text){
  int length = strlen(text);
  int j = 0;

  // Create char array for function return
  char* s = new char[1027];

  // If the index is a letter store in new array
  for (int i = 0; i < length; i++)
  {
    if ((text[i] >= 'A' && text[i] <= 'Z')   ||
        (text[i] >= 'a' && text[i] <= 'z'))
    {
        s[j] = text[i];
        j++;
    }
  }
  return s;
}
/**********************************************************
** Function: bool check_vowel_cons
** Description: Check if vowels and consonants are equal
** Parameters: const char* s
** Pre-Conditions: strip_string function is ran first
** Post-Conditions: Returns true or false
**********************************************************/
bool check_vowel_cons(const char* s){
  int length = strlen(s);
  int vowel = 0;
  int consonant = 0;

  // Run though stripped array and count vowel and consonants
  for (int i = 0; i < length; i++){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || \
       s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || \
       s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
      vowel++;
    }
    else{
      consonant++;
    }
  }
  if (vowel == consonant){
    return true;
  }
  else{
    return false;
  }
}
/***************************************************************
** Function: void letter_swap
** Description: Swaps a letter in the string for another letter.
** Parameters: char* s, const char a, const char b
** Pre-Conditions: Input taken from user and user selects '2'
**                 User then inputs two letters.
** Post-Conditions: Prints original string with modification.
****************************************************************/
void letter_swap(char* s, const char a, const char b){
  int length = strlen(s);

  // If index equal to first letter input swap for second letter input
  for (int i = 0; i < length; i++){
    if (s[i] == a){
        s[i] = b;
    }
  }
  // Print modified version of array
  cout << s << endl;
}
/**********************************************************
** Function: void flip_str
** Description: Reverses the input taken from user.
** Parameters: const char* s, char* s2
** Pre-Conditions: Input taken from user and user selects '3'
** Post-Conditions: New string will be created.
**********************************************************/
void flip_str(const char* s, char* s2){
  int length = strlen(s);
  int j = 0;

  // Store every index into new array from largest to 0
  for (int i = length - 1; i >= 0; i--){
    s2[j] = s[i];
    j++;
  }
  // Print new array
  cout << s2 << endl;
}
/**********************************************************
** Function: void inverse_cases
** Description: Inverses the case for all letters
** Parameters: const char* s, char* s2
** Pre-Conditions: Input taken from user and user selects '4'
** Post-Conditions: New string will be created.
**********************************************************/
void inverse_cases(const char* s, char* s2){
  int length = strlen(s);

  for (int i = 0; i < length; i++){

    // If uppercase letter change to lowercase
    if (s[i] >= 'A' && s[i] <= 'Z'){
      s2[i] = s[i] + 32;
    }
    // If lowercase letter change to uppercase
    else if (s[i] >= 'a' && s[i] <= 'z'){
      s2[i] = s[i] - 32;
    }
    // Otherwise store original index
    else{
      s2[i] = s[i];
    }
  }
  // Print new array
  cout << s2 << endl;
}

int main(){

  char text[1027];
  int choice;
  bool tof;
  char swap_choice;
  char swap_input;
  char* flipped_text = new char[1027];
  char* inverse = new char[1027];

  // User string input
  cout << "Enter a string (1027 Character Max): " << endl;
  cin.getline(text,1027);

  // User choice input
  cout << "What would you like to do with your sentence (Enter 1-6)?\n"
       << "1. Check if vowels and consonants are equal.\n"
       << "2. Swap a letter for another letter.\n"
       << "3. Print the string in reverse.\n"
       << "4. Inverse all letter cases.\n"
       << "5. Quit.\n"                                         << endl;
  cin  >> choice;

  switch(choice){

    case 1:{
      // Strips input first then runs that through vowel check
      char* strip = strip_string(text);
      tof = check_vowel_cons(strip);

      if (tof == true ){
        cout << "Vowels = Consonants" << endl;
      }
      else if (tof == false){
        cout << "Vowels != Consonants" << endl;
      }

      // Deletes pointer
      delete [] strip;
      strip = NULL;
      break;
    }

    case 2:{
      // Error handling. Checks if input is a letter
      do{
      cout << "Enter the letter you want to be swapped: " << endl;
      cin >> swap_choice;
      }
      while (isalpha(swap_choice) == 0);

      // Error handling. Checks if input is a letter
      do{
      cout << "Enter the letter you want inputted: " << endl;
      cin >> swap_input;
      }
      while (isalpha(swap_input)== 0);

      letter_swap(text, swap_choice, swap_input);
      break;
    }

    case 3:{
      flip_str(text,flipped_text);
      break;
    }

    case 4:{
      inverse_cases(text,inverse);
      break;
    }

    case 5:{
      // Deletes pointers
      delete [] flipped_text;
      flipped_text = NULL;
      delete [] inverse;
      inverse = NULL;
      return 0;
    }

    default:{
      cout << "Invalid input" << endl;
    }
  }
  // Deletes pointers
  delete [] flipped_text;
  flipped_text = NULL;
  delete [] inverse;
  inverse = NULL;
  return 0;
}
