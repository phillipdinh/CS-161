/*******************************************************************
 ** Program: assign3_flight.cpp
 ** Date: 02/09/2020
 ** Author: Phillip Dinh
 ** Inputs: Distance, airplane speed, wind speed, fuel price
 **         fuel burn rate, passengers, animation time      
 ** Outputs: Flight duration, flight cost per person and animation
 ******************************************************************/
#include <iostream>
#include <unistd.h>
#include <math.h>
#include <iomanip>

using namespace std;

/************************************************************************
** Function: flight_duration_hours
** Description: Calculates the time (hours) for the flight.
** Parameters: unsigned int miles, unsigned air_speed, float wind_speed
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: Function will return value of hours.
************************************************************************/
int flight_duration_hours (unsigned int miles, unsigned air_speed,
                           float wind_speed)                      {

  // Calculates flight time (hours).
  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive whole numbers.
  unsigned int hours = miles / (air_speed - wind_speed);

  return (hours);
}

/************************************************************************
** Function: return_duration_hours
** Description: Calculates the time (hours) for the return flight.
** Parameters: unsigned int miles, unsigned air_speed, float wind_speed
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: Function will return value of return_hours.
************************************************************************/
int return_duration_hours (unsigned int miles, unsigned air_speed,
                           float wind_speed)                      {
  
  // Calculates return flight time (hours).
  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive whole numbers.
  unsigned int return_hours = miles / (air_speed + wind_speed);

  return (return_hours);
}

/************************************************************************
** Function: flight_duration_minutes
** Description: Calculates the time (minutes) for the flight.
** Parameters: unsigned int miles, unsigned air_speed, float wind_speed
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: Function will return value of minutes.
************************************************************************/
int flight_duration_minutes (double miles,      double air_speed,
                             double wind_speed)                 {

  // Calculates flight time.
  // Minimum value -1.8e308. Maximum value 1.8e308.
  // Working with decimal compiled with float and got error.
  double duration = miles / (air_speed - wind_speed);

  // Minimum value -1.8e308. Maximum value 1.8e308.
  // Working with decimal compiled with float and got error.
  double whole, decimal;

  // Takes decimal from flight time.
  decimal = modf(duration, &whole);

  // Converts decimal to minutes.
  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive whole numbers.
  unsigned int minutes = decimal * 60;

  return (minutes);
}

/************************************************************************
** Function: return_duration_minutes
** Description: Calculates the time (minutes) for the return flight.
** Parameters: unsigned int miles, unsigned air_speed, float wind_speed
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: Function will return value of return_minutes.
************************************************************************/
int return_duration_minutes (double miles,     double air_speed,
                             double wind_speed)                 {

  // Calculates return flight time.
  // Minimum value -1.8e308. Maximum value 1.8e308.
  // Working with decimal compiled with float and got error.
  double duration = miles / (air_speed + wind_speed);

  // Minimum value -1.8e308. Maximum value 1.8e308.
  // Working with decimal compiled with float and got error.
  double whole, decimal;

  // Takes decimal from flight time.
  decimal = modf(duration, &whole);

  // Converts decimal to minutes.
  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive whole numbers.
  unsigned int return_minutes = decimal * 60;

  return (return_minutes);
}

/************************************************************************
** Function: flight_cost
** Description: Calculates the cost per person for the flight.
** Parameters: unsigned int miles, unsigned air_speed, float wind_speed
**             float price, float burn_rate, float people
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: Function will return value of cost.
************************************************************************/
float flight_cost(float miles, float air_speed, float wind_speed,
                  float price, float burn_rate, float people)    {

  // Calculates flight cost.
  // Minimum value -3.4e38. Maximum value 3.4e38.
  // Working with decimal.
  float cost = (miles / (air_speed - wind_speed) 
                * price * burn_rate / people);

  return (cost);
}

/************************************************************************
** Function: return_cost
** Description: Calculates the cost per person for the return flight.
** Parameters: unsigned int miles, unsigned air_speed, float wind_speed
**             float price, float burn_rate, float people
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: Function will return value of return_cost.
************************************************************************/
float return_flight_cost(float miles, float air_speed, float wind_speed,
                         float price, float burn_rate, float people)    {

  // Calculates return flight cost.
  // Minimum value -3.4e38. Maximum value 3.4e38.
  // Working with decimal.
  float return_cost = (miles / (air_speed + wind_speed) 
                       * price * burn_rate / people);

  return (return_cost);
}

/************************************************************************
** Function: flight_animation
** Description: Outputs a character ">" for each hour the flight takes
** Parameters: unsigned int seconds, unsigned int miles, 
**             unsigned air_speed, float wind_speed        
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: No post conditions
**************************************************************************/
int flight_animation(unsigned int seconds, unsigned int miles,
                     unsigned air_speed,   float wind_speed)  {
  
  // Rounds flight time to the nearest int that is not lower.
  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive whole numbers.
  unsigned int num_chars = ceil(miles / (air_speed - wind_speed));

  // Print '>' with a pause = to the user input.
  for (int x = 0; x < num_chars; x++){
    cout << "> " << flush;
    sleep(seconds);
  }
  cout << endl;

  return 0;
}

/******************************************************************************
** Function: return_animation
** Description: Outputs a character ">" for each hour the return flight takes
** Parameters: unsigned int seconds, unsigned int miles, 
**             unsigned air_speed, float wind_speed        
** Pre-Conditions: All inputs from user must be taken.
** Post-Conditions: No post conditions
******************************************************************************/
int return_animation(unsigned int seconds, unsigned int miles,
                     unsigned air_speed,   float wind_speed)  {

  // Rounds return flight time to the nearest int that is not lower.
  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive whole numbers.
  unsigned int num_chars = ceil(miles / (air_speed + wind_speed));

  // Print empty space so the next loop can print from right to left.
  for (int i = 1; i < num_chars; i++){
    cout << "  ";
  }

  // Print '<' with a pause = to the user input from right to left.
  for (int x = 0; x < num_chars; x++){
    cout << flush << "<\b\b\b";
    sleep(seconds);
  }
  cout << endl;

  return 0;
}

int main(){

  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive numbers.
  unsigned int flight_distance, airplane_speed,fuel_burn_rate, 
            passengers, animation_seconds;

  // Minimum Value -2,147,483,648. Maximum value 2,147,483,647.
  // Can be positive or negative.
  signed int wind_rate;

  // Minimum value -3.4e38. Maximum value 3.4e38.
  // Working with decimal.
  float fuel_price;

  // User input
  cout << "How far is the flight? (miles):"                     << endl;
  
  // Error handling
  while (!(cin >> flight_distance)) {
    cout << "Invalid input (Pos Int):";
    cin.clear();
    cin.ignore(100, '\n');
  }

  // User input
  cout << "How fast is the airplane moving? (miles per hour): " << endl;
  
  // Error handling
  while (!(cin >> airplane_speed)) {
    cout << "Invalid input (Pos Int):";
    cin.clear();
    cin.ignore(100, '\n');
  }

  // User input
  cout << "What is the windspeed? (miles per hour): "           << endl;
  
  // Error handling
  while (!(cin >> wind_rate)) {
    cout << "Invalid input (Integer):";
    cin.clear();
    cin.ignore(100, '\n');
  }

  // User input
  cout << "What is the fuel burn rate? (gals per hours): "      << endl;
  
  // Error handling
  while (!(cin >> fuel_burn_rate)) {
    cout << "Invalid input (Pos Int):";
    cin.clear();
    cin.ignore(100, '\n');
  }

  // User input
  cout << "What is the fuel cost? ($ per hour): "               << endl;
  
  // Error handling
  while (!(cin >> fuel_price)) {
    cout << "Invalid input (Float):";
    cin.clear();
    cin.ignore(100, '\n');
  }

  // User input
  cout << "How many people are on board?: "                     << endl;
  
  // Error handling
  while (!(cin >> passengers)) {
    cout << "Invalid input (Pos Int):";
    cin.clear();
    cin.ignore(100, '\n');
  }

  // User input
  cout << "How many seconds of animation per flight hour?: "    << endl;
  
  // Error handling
  while (!(cin >> animation_seconds)) {
    cout << "Invalid input (Pos Int):";
    cin.clear();
    cin.ignore(100, '\n');
  }; 

  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive numbers.
  unsigned int hours = flight_duration_hours(flight_distance, airplane_speed,
                                                                  wind_rate);

  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive numbers.
  unsigned int return_hours = return_duration_hours(flight_distance, 
                                          airplane_speed, wind_rate);

  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive numbers.
  unsigned int minutes = flight_duration_minutes(flight_distance, airplane_speed, 
                                        wind_rate);

  // Minimum value 0. Maximum value 4,294,967,295.
  // Can only be positive numbers.
  unsigned int return_minutes = return_duration_minutes(flight_distance, 
                                               airplane_speed, wind_rate);

  // Minimum value -3.4e38. Maximum value 3.4e38.
  // Working with decimal. 
  float cost = flight_cost(flight_distance, airplane_speed, wind_rate,
                           fuel_price,      fuel_burn_rate, passengers);

  // Sets decimal place to hundres.
  cout << fixed << setprecision(2);

  // Minimum value -3.4e38. Maximum value 3.4e38.
  // Working with decimal.
  float return_cost = return_flight_cost(flight_distance, airplane_speed,
                                         wind_rate,       fuel_price, 
                                         fuel_burn_rate,   passengers);

  // Sets decimal place to hundres.
  cout << fixed << setprecision(2);


  // Prints flight time and cost per person
  cout << "Your flight will take "         << hours 
       << " hours and "                    << minutes 
       << " minutes and cost $"            << cost     
       << " per person."                   << endl;

  // Calls flight animation
  flight_animation(animation_seconds,  flight_distance, 
                   airplane_speed,     wind_rate);

  // Prints return flight time and cost per person     
  cout << "Your return flight will take "  << return_hours 
       << " hours and "                    << return_minutes 
       << " minutes and cost $"            << return_cost     
       << " per person."                   << endl;

  // Calls return flight animation
  return_animation(animation_seconds,  flight_distance, 
                   airplane_speed,     wind_rate);

  return 0;

}
