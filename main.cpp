#include <iostream>
#include <string>

//GuessingGame, a small game where the user guesses a number and the algorithm lets the user know if they are higher/lower
//Created by Tai Wong
//8/29/2024

//5 rules:
//No global variables
//No strings
//Use <iostream> not stdio
//avoid using a mouse when possible
//only use break/continue if you must


using namespace std;

//main 
int main() {

  //initializes variables for the game, namely, the random number and a guessed bool to use in a while loop
  std::srand(time(NULL));
  int randNum = rand() % 100 + 1;
  bool guessed = false;
  int attempts = 0;

  //while loop to keep looping until user guesses right
  while(guessed==false) {

    //prompts user
    cout << "Input a number between 0-100 (inclusive)";
    cout << std::endl;
    int input;
  
    cin >> input;

    //keeps track of attempts
    attempts += 1;
    
    //if statement to determine if number is greater/equal/lower than random number
    if (input > randNum) {
      cout << "Guessed number is higher than random number";
      cout << std::endl;
    }  else if (input < randNum) {
      cout << "Guessed number is lower than random number";
      cout << std::endl;
    }  else {
      cout << "You guessed it! Good job";
      cout << std::endl;
      cout << "Attempts: " << attempts;
      cout << std::endl;
      guessed = true;
    }  
    cout << std::endl;
  }  

  //asks user if they want to retry
  cout << "Do you want to retry? (y/n)";
  cout << std::endl;
  string response;

  //if they do want to retry then the game restarts
  cin >> response;
  if (!response.compare("y")) {
    cout << "Game restarted!";
    cout << std::endl;
    main();
  }  
}
