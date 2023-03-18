#include <iostream>
using namespace std;
int main(){
    float fahrenheit, celsius;

    cout << "请输入华氏度：";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "摄氏度为：" << celsius << endl;
    return 0;
}