#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "������һ����Ȼ��: ";
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
            cout << num << "��һ��������!" << endl;
        }
        else{
            cout << num << "����һ��������!" << endl;
        }
        cout << "������һ����Ȼ��: ";
    }
    
    
    
    return 0;
}