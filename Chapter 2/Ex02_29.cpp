//Ex2.29 (Table) 
//Using the techniques of this chapter, write a program that calculates 
//the surface area and volume of cubes with face lengths of 0 to 4 cm. 
//Use tabs to print the following neatly formatted table of values: 
//  Face length         Surface area              Volume
//  of cube (cm)        of cube (cm^2)          of cube(cm^3)
//    0                       0                        0
//    1                       6                        1
//    2                       24                       8
//    3                       54                       27
 //   4                       96                       64

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    cout <<"Face length             Surface area             Volume\n";
    cout <<"of cube (cm)            of cube (cm^2)           of cube (cm^3)\n";
    cout <<"    0                        0                        0 \n";
    cout <<"    1                        " << (6 * (1 * 1))<<"                        " <<(1 * 1 * 1);      
    cout <<"\n    2                        " << (6 *( 2 * 2))<<"                       " <<(2 * 2 * 2);      
    cout <<"\n    3                        " << (6 * (3 * 3))<<"                       " <<(3 * 3 * 3);      
    cout <<"\n    4                        " << (6 * (4 * 4))<<"                       " <<(4 * 4 * 4);      

    return 0;
}
