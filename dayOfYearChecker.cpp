#include <iostream>
using namespace std;

int leapYearChecker(int year){
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}
int dayOfMonthCheker(int year, int month){
    if((month == 1) || (month == 3) || (month == 5) || (month == 7)
    || (month == 8) || (month == 10) || (month == 12)){
        return 31;
    }
    else if(month == 2){
        return leapYearChecker(year) ? 29 : 28;
    }
    else{
        return 30;
    }
}
int main(){
    int year, month, day;
    cout << "请输入合法年月日: ";
    cin >> year >> month >> day;
    int days = 0;
    for(int i = 1; i < month; ++i){
        days += dayOfMonthCheker(year, i);
    }
    days += day;
    cout << "现在是" << year << "年的第" << days << "天" << endl;
    return 0;
}