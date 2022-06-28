/***********************************************************
 ** Program: assign5_treasure.cpp
 ** Date: 03/08/2020
 ** Author: Phillip Dinh
 ** Inputs:
 ** Outputs:
 **********************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct gem{
  // Name must be string
  string name;

  // All these should be able to take decimal values
  float size;
  float weight;
  float value;
};
/**********************************************************
** Function: float valuetotal
** Description: Adds the value of every index in chest
** Parameters: gem** a, int r, int c
** Pre-Conditions: Chest must be initalized
** Post-Conditions: Return total value
**********************************************************/
float valuetotal(gem** a, int r, int c){
  int vt = 0;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      vt += a[i][j].value;
    }
  }
  return vt;
}
/**********************************************************
** Function: int n_gem
** Description: Counts the number of gems in chest
** Parameters: gem** a, int r, int c
** Pre-Conditions: Chest must be initalized
** Post-Conditions: Returns number of gems in chest
**********************************************************/
int n_gem(gem** a, int r, int c){
  int count = 0;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if (a[i][j].name != "_"){
        count++;
      }
    }
  }
  return count;
}
/**********************************************************
** Function: void printchest
** Description: Print the chest after user choice
** Parameters: gem** a, int r, int c
** Pre-Conditions: The chest must be initalized
** Post-Conditions: Chest array is printed
**********************************************************/
void printchest(gem** a, int r, int c){
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout << "|" << a[i][j].name[0] << "|";
    }
    cout << endl;
  }
}
/**********************************************************
** Function: void add_item
** Description: Inputs user choice into the array
** Parameters: gem** a, int r, int c
** Pre-Conditions: User selects choice 1
** Post-Conditions: Chest array will be modified
**********************************************************/
void add_item(gem** a, int r, int c){
  string name;
  float weight, value, size;

  // Take new values
  cout << "Enter name (string):"          << endl;
  cin  >> name;

  cout << "Enter size (inches, float):"   << endl;
  cin  >> size;

  cout << "Enter weight (lbs, float):"    << endl;
  cin  >> weight;

  cout << "Enter value ($, float):"       << endl;
  cin  >> value;

  // Assigns new values
  a[r][c].name = name;
  a[r][c].size = size;
  a[r][c].weight = weight;
  a[r][c].value = value;
}
/**********************************************************
** Function: void delete_item
** Description: Removes an index from chest array
** Parameters: gem** a, int r, int c
** Pre-Conditions: User selects choice 2
** Post-Conditions: Index values will be set to 0
**********************************************************/
void delete_item(gem** a, int r, int c){
  // Sets all values to 0
  a[r][c].name = "_";
  a[r][c].size = 0;
  a[r][c].weight = 0;
  a[r][c].value = 0;
}
/**********************************************************
** Function: void random_item
** Description: gem** a, int r, int c
** Parameters: gem** a, int r, int c
** Pre-Conditions: User selects choice 3
** Post-Conditions: A random "gem" will be inserted into chest array
**********************************************************/
void random_item(gem** a, int r, int c){
  // New array for random names
  string names[5] = {"Ruby","Amber","Pearl","Jade","Emerald"};

  // Assigns random values
  a[r][c].name = names[rand() % 5];
  a[r][c].size = float(rand() % 20) + 0.1;
  a[r][c].weight = float(rand() % 50) + 10;
  a[r][c].value = rand() % 500 + 100;
}
/**********************************************************
** Function: void show_item
** Description: Prints value of index of user choice
** Parameters: gem** a, int r, int c
** Pre-Conditions: User selects choice 4 and row and column
** Post-Conditions: Prints value of gem members
**********************************************************/
void show_item(gem** a, int r, int c){
  // Prints values
  cout << "Gem name: "  << a[r][c].name     << endl
       << "Size: "      << a[r][c].size     << endl
       << "Weight: "    << a[r][c].weight   << endl
       << "Value: "     << a[r][c].value    << endl;
}
/**********************************************************
** Function: void change_name
** Description: Allows user to change name of gem
** Parameters: gem** a, int r, int c
** Pre-Conditions: User selects choice 5
** Post-Conditions: Prints new name of gem
**********************************************************/
void change_name(gem** a, int r, int c){
  string name;
  // Takes new name
  cout << "Enter new name (string):"  << endl;
  cin  >> name;

  // Assigns new name
  a[r][c].name = name;

  // Prints new name
  cout << "New name is: " << name     << endl;
}

int main(){
  // seeds random time
  srand(time(NULL));

  unsigned int rows, cols, ro, co;
  unsigned int choice = 0;
  bool gameover = false;
  int count, vt;

  cout << "Welcome to Gem World!"     << endl;

  cout << "Enter number of rows: "    << endl;
  cin  >> rows;

  cout << "Enter number of columns: " << endl;
  cin >> cols;

  // Initializes double array
  gem** chest = new gem*[rows];
  for(int i = 0; i < rows; i++){
    chest[i] = new gem[cols];
  }
  // Sets array to 0 values
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      chest[i][j].name    = "_";
      chest[i][j].size    = 0;
      chest[i][j].weight  = 0;
      chest[i][j].value   = 0;
    }
  }
  printchest(chest,rows,cols);

  do{
    do{
    cout << "1) Add gem"           << endl
         << "2) Remove gem"        << endl
         << "3) Add random gem"    << endl
         << "4) Show gem"          << endl
         << "5) Change gem name"   << endl
         << "6) Quit"              << endl;
    cin  >> choice;
    }
    while(choice < 1 || choice > 6);

    switch(choice){

      // Add gem
      case 1:{
        do{
        cout << "Enter row:"      << endl;
        cin  >> ro;
        }
        while(ro >= rows || ro < 0);

        do{
        cout << "Enter column:"   << endl;
        cin  >> co;
        }
        while(co >= cols || co < 0);

        add_item(chest,ro,co);
        printchest(chest,rows,cols);
        count = n_gem(chest,rows,cols);
        vt = valuetotal(chest,rows,cols);

        cout << "Total value of " << count
             << " items: $" << vt << endl;
        break;
      }
      // Deletes gem
      case 2:{
        do{
        cout << "Enter row:"      << endl;
        cin  >> ro;
        }
        while(ro >= rows || ro < 0);

        do{
        cout << "Enter column:"   << endl;
        cin  >> co;
        }
        while(co >= cols || co < 0);

        delete_item(chest,ro,co);
        printchest(chest,rows,cols);
        count = n_gem(chest,rows,cols);
        vt = valuetotal(chest,rows,cols);

        cout << "Total value of " << count
             << " items: $" << vt << endl;
        break;
      }
      // Random gem
      case 3:{
        do{
        cout << "Enter row:"      << endl;
        cin  >> ro;
        }
        while(ro >= rows || ro < 0);

        do{
        cout << "Enter column:"   << endl;
        cin  >> co;
        }
        while(co >= cols || co < 0);

        random_item(chest,ro,co);
        printchest(chest,rows,cols);
        count = n_gem(chest,rows,cols);
        vt = valuetotal(chest,rows,cols);

        cout << "Total value of " << count
             << " items: $" << vt << endl;
        break;
      }
      // Prints values
      case 4:{
        do{
        cout << "Enter row:"      << endl;
        cin  >> ro;
        }
        while(ro >= rows || ro < 0);

        do{
        cout << "Enter column:"   << endl;
        cin  >> co;
        }
        while(co >= cols || co < 0);

        show_item(chest,ro,co);
        printchest(chest,rows,cols);
        count = n_gem(chest,rows,cols);
        vt = valuetotal(chest,rows,cols);

        cout << "Total value of " << count
             << " items: $" << vt << endl;
        break;
      }
      // Change name
      case 5:{
        do{
        cout << "Enter row:"      << endl;
        cin  >> ro;
        }
        while(ro >= rows || ro < 0);

        do{
        cout << "Enter column:"   << endl;
        cin  >> co;
        }
        while(co >= cols || co < 0);

        change_name(chest,ro,co);
        printchest(chest,rows,cols);
        count = n_gem(chest,rows,cols);
        vt = valuetotal(chest,rows,cols);

        cout << "Total value of " << count
             << " items: $" << vt << endl;
        break;
      }
      // Quits game
      case 6:{
        cout << "Thank you for coming!" << endl;
        gameover = true;
        break;
      }
      default:
        return 0;
    }
  }
  while(gameover == false);

  for(int i = 0; i < rows; i++){
      delete [] chest[i];
  }
  delete [] chest;

  return 0;
}
