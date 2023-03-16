/*
**  Filename:    Ex07_08.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        15/11/2022

Description of the problem  (Write C++ Statements)
*/
#include <iostream>
#include <array>
#include <vector>
#include <random>
#include <gsl/gsl>

double minimum(double minval, double currVal){

    if(minval > currVal){
        return currVal;
    }
    else{
        return minval;
    }
}
double maximum(double maxval, double currVal){
    if(maxval < currVal){
        return currVal;
    }
    else{
        return maxval;
    }
}

int main()
{
    //a) Display the value of element 5 of character array f
    std::array<char, 10> f{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    std::cout <<"characters in array f: " <<f.at(5);

    //b) Input a value into element 3 of one-dimensional floating-point array b.
    std::array<double, 6> b{};
    std::cout <<"\nInput 3 values of one-dimensional floating-point: ";
    std::cin >>b.at(3);
    std::cout <<"array b contains: ";
    for(const auto& values : b){
        std::cout <<values <<" ";
    }

    //c) Initialize each of the 4 elements of one-dimensional integer array g to 7.
    std::array<int, 4> g{7, 7, 7, 7};
    std::cout <<"\narray g contains: ";
    for(const int& values : g){
        std::cout <<values <<" ";
    }

    //d) Total and display the elements of floating-point array c of 200 elements.
    std::array<double, 200> c{};
    double total{0};
    for(auto& values : c){
        values = 200;
    }

    std::cout <<"\n\ndisplay the elements of floating-point array c\n";
    for(const auto& values : c){
        std::cout <<values <<" ";
        total += values;
    }
    std::cout <<"\nTotal the elements array c: " <<total;

    //e) Copy array a into the first portion of array b. Assume that both arrays contain
    //   doubles and that arrays a and b have 17 and 41 elements, respectively
    constexpr int aSize{17};
    constexpr int bSize{41};

    std::array<double, aSize> a{1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 
                                11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0};
            
    std::array<double, bSize> bb{};
    for(auto values : a){
        bb[values] = values;
    }

    std::cout <<"\n\nDisplaying array b: ";
    for(const auto& values: bb){
        std::cout <<values <<" ";
    }

    //f) Determine and display the smallest and largest values contained in 999-element
    //   floatingpoint array w.
    std::array<double, 999> w{};
    double smallest{999.9}, largest{0};
    std::default_random_engine engine(gsl::narrow_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<int> randomInt{1, 999};

    //filling random values 1 to 999
    for(auto& value : w){
        value = randomInt(engine) + .99;
    }

    //finding smallest and largest
    for(const auto& value : w){
        smallest = minimum(smallest, value);
        largest = maximum(largest, value);
    }

    std::cout <<"\n\nDisplaying smallest value in array w: " <<smallest
            <<"\nlargest value in array w: " <<largest;
    
    return 0;
}