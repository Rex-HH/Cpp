#include <iostream>
using namespace std;
#define f(a) (a)*(a)*(a)
int main(){
    int a;
    cout << "������һ����λ��: ";
    while (cin >> a)
    {
        if(a == 0){
            break;
        }
        if((f(a / 100) + f(a / 10 % 10) + f(a % 10)) == a){            cout << a << "��һ��ˮ�ɻ�����" << endl;
        } 
        else{
            cout << a << "����һ��ˮ�ɻ�����" << endl;
        }
        cout << "������һ����λ��: ";
    }
    
    return 0;
}