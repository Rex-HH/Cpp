#include <iostream>
using namespace std;
#define f(a) (a)*(a)*(a)
int main(){
    int a;
    cout << "请输入一个三位数: ";
    while (cin >> a)
    {
        if(a == 0){
            break;
        }
        if((f(a / 100) + f(a / 10 % 10) + f(a % 10)) == a){            cout << a << "是一个水仙花数！" << endl;
        } 
        else{
            cout << a << "不是一个水仙花数！" << endl;
        }
        cout << "请输入一个三位数: ";
    }
    
    return 0;
}