/*
**  Filename:    Ex06_59.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        10/11/2022

Description of the problem  (Computer-Assisted Instruction: Monitoring Student Performance) 
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

  while (true)
  {
    // Generate the first question
    auto questionAndAnswer = generateQuestion();
    std::string question = questionAndAnswer.first;
    int correctAnswer = questionAndAnswer.second;

    // Initialize counters for correct and incorrect answers
    int numCorrect = 0;
    int numIncorrect = 0;

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
        // If the answer is correct, increment the correct answer counter and generate a new question
        ++numCorrect;
        questionAndAnswer = generateQuestion();
        question = questionAndAnswer.first;
        correctAnswer = questionAndAnswer.second;
      }
      else
      {
        // If the answer is incorrect, increment the incorrect answer counter and let the student try again
        ++numIncorrect;
      }

      // After 10 answers, calculate the percentage of correct answers
      if (numCorrect + numIncorrect == 10)
      {
        float percentCorrect = static_cast<float>(numCorrect) / 10.0f * 100.0f;

        // If the percentage is lower than 75%, display "Please ask your teacher for extra help."
        if (percentCorrect < 75.0f)
        {
          std::cout << "Please ask your teacher for extra help." << std::endl;
        }
        // If the percentage is 75% or higher, display "Congratulations, you are ready to go to the next level!"
        else
        {
          std::cout << "Congratulations, you are ready to go to the next level!" << std::endl;
        }

        // Reset the program so another student can try it
        break;
      }
    }
  }

  return 0;
}
