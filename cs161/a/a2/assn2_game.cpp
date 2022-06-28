/*****************************************************
 ** Program: assn2_game.cpp
 ** Author: Phillip Dinh
 ** Date: 01/26/2020
 ** Description: Adventure Game
 ** Input: 1 or 2
 ** Output: Points and next point of story.
 ******************************************************/

#include <iostream> 
#include <cstdlib>
#include <ctime>


using namespace std; // So we don't have to write std::

int main ()

{

  srand(time(NULL)); //This holds a random time

  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Try to study
  unsigned int choice_1;

  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Midterm or Social Media
  unsigned int choice_2;
  
  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Sleep or Tik Tok
  unsigned int choice_3; 
  
  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Breakfast
  unsigned int choice_4; 
  
  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Party
  unsigned int choice_5; 
  
  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Drink
  unsigned int choice_6;
  
  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  // Sleep or Study
  unsigned int choice_7; 

  // Minimum value 0. Maximum value 4,294,967,295.
  // Only needs to be able to take (1) or (2).
  unsigned int play;

  // Minimum value -2,147,483,648. Maximum value 2,147,483,647.
  // Points can be negative or positive.
  int points;

  // sets variable as true
  bool restart = true;


  // while loop to ask the user if they want to play again
  while (restart) {

    // Print statement
    cout  << "Welcome to College" << endl;

    // Takes user input
    cout  << "It is a Friday Night at Oregon State University"   << endl
          << "Do you try to study"                               << endl
          << "(1) Yes"                                           << endl
          << "(2) No "                                           << endl;

    cin >> choice_1;

    // First path 
    if (choice_1 == 1) {

      points += 10;

      // Takes user input
      cout  << endl << "Good choice! +10 Points! Do you"   << endl
            << "(1) Study for a midterm"                   << endl
            << "(2) Procrastinate on social media   "      << endl;

      cin >> choice_2;

      if (choice_2 == 1) {

        points += 10;

        // Takes user input
        cout  << endl << "You had a great study session! +10 Points" << endl
              << "It is now sunday night at 10pm."                   << endl
              << "Your midterm is tomorrow at 7:30. Do you "         << endl
              << "(1) Sleep early or"                                << endl
              << "(2) Stay up and watch Tik Toks  "                  << endl;

        cin >> choice_3;

        if (choice_3 == 1) {

          points += 10;

          // Takes user input
          cout  << endl << "Nice! +10 Points!"          << endl
                << "You have some extra time do you"   << endl
                << "(1) Get breakfast or"              << endl
                << "(2) Sleep in until the midterm  "  << endl;
            
          cin >> choice_4;

          if (choice_4 == 1) {

            points += 20;

            cout  << endl << "You are energized and ace your midterm!" << endl
                  << "+20 Points!"                                     << endl;

            cout  << "You have " << points 
                  << "!"         << endl 
                  << "The End"   << endl;
          }

          else if (choice_4 == 2) {

            points -= 10;

            cout  << endl << "Your brain needs fuel!"                 << endl
                  << "You don't do as well as you hoped. -10 Points " << endl;

            cout  << "You have " << points 
                  << "!"         << endl 
                  << "The End"   << endl;
          }

          else {
            
            cout << "Invalid Choice" << endl;

            return 1;
          }
        }

        else if (choice_3 == 2) {
          
          // Random number 0-5
          int hours = rand() % 5;

          points -= hours;

          cout  << endl << "You over sleep and miss your midterm. -" << hours
                << " points for every hour you stayed up"            << endl;

          cout  << "You have " << points 
                << "!"         << endl 
                << "The End"   << endl;
        }

        else {
            
          cout << "Invalid Choice" << endl;

          return 1;
        }
      }

      else if (choice_2 == 2) {

        points -= 10;

        cout  << endl << "You never studied and failed your midterm"  << endl
              << "-10 Points"                                         << endl;

        cout  << "You have " << points 
              << "!"         << endl 
              << "The End"   << endl;
      }

      else {
            
      cout << "Invalid Choice" << endl;

      return 1;
      }    
    }

    // Second path
    else if (choice_1 == 2) {

      points -= 10;
      
      // Takes user input
      cout  << endl << "Do you go to the party?" << endl
            << "-10 Points"                      << endl
            << "(1) Yes"                         << endl
            << "(2) No"                          << endl;

      cin >> choice_5;

      if (choice_5 == 1) {

        points -= 10;

        // Takes user input
        cout  << endl << "Instead of studying you went to the party" << endl
              << "-10 Points"                                        << endl
              << "Do you drink"                                      << endl
              << "(1) Yes"                                           << endl
              << "(2) No "                                           << endl;

        cin >> choice_6;

        if (choice_6 == 1) {

          // Random number 5 - 15
          int drinks = rand() % 10 + 5;

          points -= drinks;

          // Takes user input
          cout  << endl << "You're not sure how much you drank. -"    << drinks
                << " points for every drink you had. Do you "         << endl 
                << "(1) Stay in bed"                                  << endl
                << "(2) Get up and study?"                            << endl;

          cin >> choice_7;

          if (choice_7 == 1) {

            points -= 20;

            cout  << "You woke up and realized you missed a deadline" << endl
                  << "-20 Points"                                     << endl;

            cout  << "You have " << points 
                  << "!"         << endl 
                  << "The End"   << endl;
          }
            
            else if (choice_7 == 2) {

              points += 10;

              cout  << "You take care of friends that are too drunk." << endl
                    << "+10 Points for being a good person!"          << endl;

              cout  << "You have " << points 
                    << "!"         << endl 
                    << "The End"   << endl;
            }

            else {
            
            cout << "Invalid Choice" << endl;

            return 1;
            }
        }

          else if (choice_6 == 2) {

            points += 10;

            cout  << endl << "You check canvas and you"              << endl
                  << "have an assingment due"                        << endl
                  << "You finish it before the deadline! +10 Points" << endl;

            cout  << "You have " << points 
                  << "!"         << endl 
                  << "The End"   << endl;
          }

          else {
            
          cout << "Invalid Choice" << endl;

          return 1;
          }
      }

      else if (choice_5 == 2) {

        points += 10;

        cout  << endl << "You get some rest and finish an assignment" << endl
              << "+10 Points"                                         << endl;

        cout  << "You have " << points 
              << "!"         << endl 
              << "The End"   << endl;
      }

      else {
            
      cout << "Invalid Choice" << endl;

      return 1;
      }
    }

    else {
            
    cout << "Invalid Choice" << endl;

    return 1;
    }

    // Takes user input
    cout << endl << "Do you want to play again?"  << endl
         << "(1) Yes"                             << endl
         << "(2) No"                              << endl 
         << endl;
    
    cin >> play;

    // Ends Game
    if (play == 2) {
      
      cout << "Thank you for playing" << endl;
      
      return 1;
    }
    
    // Restarts game
    else if (play == 1) {

      restart = true;
    }

    else {  

    cout << "Invalid Choice" << endl;

    return 1;
    }
  }
  return 0;
}
