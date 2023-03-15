#include <iostream>
using namespace std;
int main(){
    int year;
    while (cin >> year)
    {
        if(year >= 0){
            if(((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0)){
                cout << year  << " is a leap year." << endl;
            }
            else{
                cout << year << " is not a leap year." << endl; 
            }
        }
        else{
            break;
        }
    }
    return 0;
}