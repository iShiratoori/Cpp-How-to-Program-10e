/*
**  Filename:    Ex06_58.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Computer-Assisted Instruction: Reducing Student Fatigue)
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

    // Generate a random number from 1 to 4
    int responseNum = rand() % 4 + 1;

    // Check if the answer is correct
    if (answer == correctAnswer)
    {
      // If the answer is correct, display a random "Very good!" response and generate a new question
      switch (responseNum)
      {
        case 1:
          std::cout << "Very good!" << std::endl;
          break;
        case 2:
          std::cout << "Excellent!" << std::endl;
          break;
        case 3:
          std::cout << "Nice work!" << std::endl;
          break;
        case 4:
          std::cout << "Keep up the good work!" << std::endl;
          break;
      }

      questionAndAnswer = generateQuestion();
      question = questionAndAnswer.first;
      correctAnswer = questionAndAnswer.second;
    }
    else
    {
      // If the answer is incorrect, display a random "No. Please try again." response and let the student try again
      switch (responseNum)
      {
        case 1:
          std::cout << "No. Please try again." << std::endl;
          break;
        case 2:
          std::cout << "Wrong. Try once more." << std::endl;
          break;
        case 3:
          std::cout << "Don't give up!" << std::endl;
          break;
        case 4:
          std::cout << "No. Keep trying." << std::endl;
          break;
      }
    }
  }

  return 0;
}
