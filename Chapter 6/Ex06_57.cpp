/*
**  Filename:    Ex06_57.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Computer-Assisted Instruction) 
*/
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

// Generates and returns a new multiplication question and its correct answer
std::pair<std::string, int> generateQuestion()
{
  // Generate two random one-digit integers
  int x = rand() % 9 + 1;  // generates a random integer from 1 to 9
  int y = rand() % 9 + 1;  // generates a random integer from 1 to 9

  // Create the question string and return it along with the correct answer
  std::string question = "How much is " + std::to_string(x) + " times " + std::to_string(y) + "?";
  return std::make_pair(question, x * y);
}

int main()
{
  // Seed the random number generator with the current time
  srand(time(0));

  // Generate the first question
  auto questionAndAnswer = generateQuestion();
  std::string question = questionAndAnswer.first;
  int correctAnswer = questionAndAnswer.second;

  while (true)
  {
    // Ask the question
    std::cout << question << std::endl;

    // Get the student's answer
    int answer;
    std::cin >> answer;

    // Check if the answer is correct
    if (answer == correctAnswer)
    {
      // If the answer is correct, display "Very good!" and generate a new question
      std::cout << "Very good!" << std::endl;
      questionAndAnswer = generateQuestion();
      question = questionAndAnswer.first;
      correctAnswer = questionAndAnswer.second;
    }
    else
    {
      // If the answer is incorrect, display "No. Please try again." and let the student try again
      std::cout << "No. Please try again." << std::endl;
    }
  }

  return 0;
}