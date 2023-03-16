/*
**  Filename:    GlobalWarmingFactsQuiz.h
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        07/11/2022

Description of the problem  (Global Warming Facts Quiz) 
*/
#ifndef GLOBALWARMINGFACTSQUIZ_H
#define GLOBALWARMINGFACTSQUIZ_H

#include <iostream>
#include <string>

class GlobalWarmingFactsQuiz
{
public:
    GlobalWarmingFactsQuiz(){ }

    void display(){
        
        int q{1};
        while (q <= 5)
        {
            std::cout <<"\nPlease choice the correct answer of the following question (" << q <<"/ 5)";
            getNext(q);
            ++q;
        }
    }

    void getNext(int q)
    {
        if(q == 1)
            Question1();
        if(q == 2)
            Question2();
        if(q == 3)
            Question3();
        if(q == 4)
            Question4();
        if(q == 5)
            Question5();
    }

    void Question1()
    {
        char choice{'0'};
        std::cout <<"\nWhats is Global Warning Related to?";
        std::cout <<"\nA) Sound \nB) Power \nC) The Ozone Layer \nD) a Circus \n>";
        std::cin >>choice;

        switch (choice){
        case 'A':
        case 'a': 

        case 'B':
        case 'b':

        case 'D':
        case 'd':
            std::cout <<"Wrong: correct answer is C" << std::endl;
            AddWrongAnswers();
            break;
        case 'C':
        case 'c':
            std::cout <<"C Correct Answer" <<std::endl;
            AddCorrectAnswers();
            break;
        default:
            std::cout <<"\nIncorrect Selection" << std::endl;
            std::cin >>choice;
            break;
        }
    }
    void Question2(){ 
        
        char choice{'0'};
        std::cout <<"\nGlobal Warning?";
        std::cout <<"\nA) is when the earth's temperature rises"
                <<"\nB) makes electricity \nC) is a tree \nD) happens because of sound \n>";
        std::cin >>choice;

        switch (choice){
        case 'A':
        case 'a':
            std::cout <<"A Correct Answer" <<std::endl;
            AddCorrectAnswers();
            break;
        case 'B':
        case 'b':

        case 'C':
        case 'c':
        
        case 'D':
        case 'd':
            std::cout <<"Wrong: correct answer is A" << std::endl;
            AddWrongAnswers();
            break;
        default:
            std::cout <<"\nIncorrect Selection" << std::endl;
            std::cin >>choice;
            break;
        }
    }
    void Question3(){ 
        
        char choice{'0'};
        std::cout <<"\nGreenHouse gases create what problem for the earth??";
        std::cout <<"\nA) they trap heat \nB) they produce heat "
                <<"\nC) they spread heat \nD) makes it snow \n>";
        std::cin >>choice;

        switch (choice){
        case 'A':
        case 'a':
            std::cout <<"A Correct Answer" <<std::endl;
            AddCorrectAnswers();
            break;
        case 'B':
        case 'b':

        case 'C':
        case 'c':
        
        case 'D':
        case 'd':
            std::cout <<"Wrong: correct answer is A" << std::endl;
            AddWrongAnswers();
            break;
        default:
            std::cout <<"\nIncorrect Selection" << std::endl;
            std::cin >>choice;
            break;
        }
    }
    void Question4(){ 
        
        char choice{'0'};
        std::cout <<"\nWhich Countries Produce most Global warning Problems?";
        std::cout <<"\nA) Brazil \nB) USA \nC) United Kingdom \nD) Jaimaca \n>";
        std::cin >>choice;

        switch (choice){
        case 'A':
        case 'a':
        
        case 'C':
        case 'c':
            
        case 'D':
        case 'd':
            std::cout <<"Wrong: correct answer is B" << std::endl;
            AddWrongAnswers();
            break;

        case 'B':
        case 'b':
            std::cout <<"B Correct Answer" <<std::endl;
            AddCorrectAnswers();
            break;
        default:
            std::cout <<"\nIncorrect Selection" << std::endl;
            std::cin >>choice;
            break;
        }
    }
    void Question5(){ 
        
        char choice{'0'};
        std::cout <<"\nWhich gases causes Global Warning?";
        std::cout <<"\nA) Smoke \nB) Nitrogen \nC) Carbon dioxide \nD) All of them Above \n>";
        std::cin >>choice;

        switch (choice){
        case 'A':
        case 'a':
        
        case 'B':
        case 'b':

        case 'D':
        case 'd':
            std::cout <<"Wrong: correct answer is C" << std::endl;
            AddWrongAnswers();
            break;
        case 'C':
        case 'c':
            std::cout <<"C Correct Answer" <<std::endl;
            AddCorrectAnswers();
            break;
        default:
            std::cout <<"\nIncorrect Selection" << std::endl;
            std::cin >>choice;
            break;
        }
    }

    void star(){
        
        std::cout <<"\n\t====Global Warning Fact Quiz=====";
        display();

        if(getCorrectAnswers() == 5 and getWrongAnswers() == 0){
            std::cout <<"Excellent!" <<std::endl;
            result();
        }
        
        if(getCorrectAnswers() == 4 and getWrongAnswers() <= 1){
            std::cout <<"very Good" <<std::endl;
            result();
        }

        if( getCorrectAnswers() <= 3 or getWrongAnswers() >= 2){
            std::cout <<"\nTime to brush up on your knowledge of global warming" <<std::endl;
            result();
        }
    }
    void result()
    {
        std::cout <<"correct Answers: " <<getCorrectAnswers();
        std::cout <<"\nWrong Answers: " <<getWrongAnswers();
    }
    void AddCorrectAnswers() { correctAnswers += 1;}
    void AddWrongAnswers() { wrongAnswers += 1; }

    int64_t getCorrectAnswers() { return correctAnswers;}
    int64_t getWrongAnswers() { return wrongAnswers;}
private:
    std::int64_t correctAnswers{0}, wrongAnswers{0};
};

#endif