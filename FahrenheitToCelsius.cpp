#include <iostream>
using namespace std;
int main(){
    float fahrenheit, celsius;

    cout << "�����뻪�϶ȣ�";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "���϶�Ϊ��" << celsius << endl;
    return 0;
}