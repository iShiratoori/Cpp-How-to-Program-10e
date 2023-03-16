#include <iostream>
#include <array>
using namespace std;

int main(){
    constexpr size_t valueSize{20};
    array<int, valueSize> values{};

    int input{0};
    cout <<"Enter values between 10-100: ";
    for(int i{0}; i < values.size(); ++i){
        cin >>input;

        if(input >= 10 && input <= 100){
            bool isDuplicate = false;

            for(int j = 0; j <= i; ++j){
                if(values.at(j) == input){
                    isDuplicate = true;
                    break;
                }
            }
            
            if(!isDuplicate){
                values.at(i) = input;
            }
        }
    }

    cout <<"array values contains: ";
    for(const int& value : values){
        cout <<value <<" ";
    }
}