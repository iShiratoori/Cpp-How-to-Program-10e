/*
**  Filename:    Ex04_39.cpp
**  Author:      Abdirahman Hussein
**  Email:       shiratoori2022@gmail.com
**  Date:        05/11/2022

Making a Difference

Description of the problem   (School Nutrition Programs) I 
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int calories{0};

void foodMenu();
void foodOptions(int options){

    while (options != 00){
        if(options == 1)
        {
            cout <<"\t\t\t==Fruits and Vegetables==" <<endl;
            cout <<"1. Strawberies " <<endl;
            cout <<"2. Orrange" <<endl;
            cout <<"3. Apple" <<endl;
            cout <<"4. Pear" <<endl;
            cout <<"5. Bananas" <<endl;
            cout <<"00. Go Back" <<endl;
            cin >>options;

            if( options == 1){
                calories += 10 * 6; //strawberies
            }
            else if( options == 2){
                calories += 1 * 45; //orange
            }
            
            else if( options == 3){
                calories += 1 * 95;  //apple
            }
            
            else if( options == 4){
                calories += 1 * 102; //pear
            }

            else if( options == 5){
                calories += 1 * 105; //banana
            }
        } // option 1
    }
        if(options == 2)
        {
            cout <<"\t\t\t==Fruits and Vegetables==" <<endl;
            cout <<"1. Yongurt " <<endl;
            cout <<"2. Butter " <<endl;
            cout <<"3. Milk" <<endl;
            cout <<"4. Cheese" <<endl;
            cout <<"5. Ice cream" <<endl;
            cout <<"00. Go Back" <<endl;
            cin >>options;

            if( options == 1){
                calories += 1 * 59; //Yogurt
            }
            else if( options == 2){
                calories += 1 * 717; //Butter
            }
            
            else if( options == 3){
                calories += 1 * 42;  //Milk
            }
            
            else if( options == 4){
                calories += 1 * 402; //cheese
            }

            else if( options == 5){
                calories += 1 * 207; //ice cream
            }
        } // option 2
        else if( options == 5){
            if(calories >= 500 and calories <= 700){
                cout <<"sufficeint callories " <<calories <<endl;
                calories = 0;
                }
            else if(calories > 700){
                cout <<"Reconmended Callories Exceeded " <<calories <<endl;
            }
            else if(calories < 500){
                cout <<"in-Sufficeint callories " <<calories <<endl;
                foodOptions(options);
            }
        }
    foodMenu();
}
void foodMenu()
{
    int options{0};

    cout <<"\t\t\t===Food Menu Suggestions: " <<endl;;
    cout <<"1. Fruits and Vegetables" <<endl;
    cout <<"2. dairy" <<endl;
    cout <<"3. Grains" <<endl;
    cout <<"4. Protein" <<endl;
    cout <<"5. Next Student " <<endl;
    cin >>options;

    foodOptions(options);
    
}

int main()
{
    int schoolMeals{}, options{0};

    cout <<"\t\t\t============School Nutrition Programee============" <<endl;
    foodMenu();

    return 0;
}
