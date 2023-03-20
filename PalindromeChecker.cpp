#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "请输入一个自然数: ";
    while (cin >> num)
    {
        if(num == 0){
            break;
        }
        int o_num, r_num = 0;
        o_num = num;
        while (o_num > 0)
        {
            r_num = r_num * 10 + o_num % 10;
            o_num /= 10;
        }
        if(num == r_num){
            cout << num << "是一个回文数!" << endl;
        }
        else{
            cout << num << "不是一个回文数!" << endl;
        }
        cout << "请输入一个自然数: ";
    }
    
    
    
    return 0;
}