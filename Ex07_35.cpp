/*
**  Filename:    Ex07_35.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Polling) 
*/
#include <iostream> // for input/output
#include <string> // for string type
#include <array> // for array type
#include <iomanip> // for output formatting
#include <algorithm>
using namespace std;

int main()
{
  // array of environmental issues
  array<string, 5> topics{
    "Public Health", "Waste Disposal",
      "Climate Change", "Overpopulation", "Pollution",
  };

  // two-dimensional array to store responses
  // (5 rows, 10 columns)
  array<array<int, 10>, 5> responses{}; 

  // variable to store user's choice to exit
  char exit{'y'};
  
  // variable to store the number of responses
  int numbResponses{0};
  
  // loop until the user chooses to exit
  while (exit != 'n')
  {
    // increment the number of responses
    ++numbResponses;

    // prompt the user to rate each environmental issue
    cout <<"\nResponse " <<numbResponses;
    cout << "\nPlease rate each of these global environmental issues (1-10):\n";
    

    // loop through the environmental issues
    for ( int issue{}; issue < 5; ++issue ) {

      // variable to store the rating
      int rating;
      
      // prompt the user for a rating and
      // validate the input (1-10)
      do {
         cout << topics[ issue ] << ": ";
         cin >> rating;
      } while ( rating < 1 || rating > 10 );

      // increment the corresponding element in the responses array
      ++responses[ issue ][ rating - 1 ];
    }
    
    // print the rating scale
    cout << "\nRating:        ";
    for ( int i{ 1 }; i <= 10; ++i ) 
      cout << setw( 4 ) << i;
      cout << "  Average" << endl;
    
    // print a line of equals signs
    for ( int i{}; i < 64; ++i ) 
      cout << '=';
    
    int total_min{ 10 * numbResponses };
    int total_max{};
    int issue_min;
    int issue_max;


    // print the environmental issues and their average ratings
    cout <<endl;
    for(int row{0}; row < 5; ++row){

      // variable to store the total rating for each issue
      int total{0};

      // print the environmental issue
      cout << left << setw( 15 ) << topics[ row ];
      
      // print the number of responses for each rating
      for(int col{0}; col < 10; ++col){
        cout << right << setw( 4 ) << responses.at(row).at(col);
        // add the rating to the total
        total += responses.at(row).at(col) * (col + 1);
      }
      
      // update the minimum and maximum total ratings
      if ( total < total_min ) {
         total_min = total;
         issue_min = row;
      }

      // update the maximum total ratings
      if ( total > total_max ) {
         total_max = total;
         issue_max = row;
      }

      // calculate and print the average rating
      cout << fixed << setprecision( 2 );
      cout << setw( 9 ) << 1.0 * total / numbResponses <<"\n";
    }

    // print the highest and lowest point totals
    cout << "\nHighest point total: " << topics[ issue_max ] << " ("
        << total_max << ")\nLowest point total: " << topics[ issue_min ] << " ("
        << total_min << ")" << endl;

    // ask the user if they want to continue the program
    cout <<"Do you want to continue program (y or n): ";
    cin >>exit;
  }
  return 0;
} 
