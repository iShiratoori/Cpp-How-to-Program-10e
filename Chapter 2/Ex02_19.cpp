//2.19 (Arithmetic, Smallest and Largest) 
//Write a program that inputs three integers from the keypoard 
//and prints the sum, average, product, smallest and largest of these numbers. The screen dialog
//should appear as follows:
//Input three different integers: 13 27 14
//Sum is 54
//Average is 18
//Product is 4914
//Smallest is 13
//Largest is 2

#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    int sum, average, product, smallest, largest;

    cout <<"Input three different integers: ";
    cin >>number1 >>number2 >>number3;

    sum = number1 + number2 + number3;
    average = (number1 + number2 + number3) / 3;
    product = number1 * number2 * number3;
    
    if(number1 < number2 && number1 < number3 ){
        smallest = number1;
    }    
    if(number2 < number1 && number2 < number3 ){
        smallest = number2;
    }    
    if(number3 < number1 && number3 < number2 ) {
        smallest = number3;
    }

    
    if(number1 > number2 && number1 > number3 ){
        largest = number1;
    }
    if(number2 > number1 && number2 > number3 ){
        largest = number2;
    }
    if(number3 > number1 && number3 > number2 ){
        largest = number3;
    }

    cout <<"Sum is: " <<sum <<endl;
    cout <<"Product is: " <<product <<endl;
    cout <<"avarage is: " <<average <<endl;
    cout <<"Smallest is: " <<smallest <<endl;
    cout <<"Largest is: " <<largest <<endl;

    return 0;

}