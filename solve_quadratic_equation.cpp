#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, x1, x2, delta;
    cout << "������a b c: ";
    while (cin >> a >> b >> c)
    {
        if(a == 0){
            break;
        }
        delta = b * b - 4 * a * c;
        if(delta > 0){
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "�÷��������������ʵ�����ֱ�Ϊ: " << x1 <<" " << x2 << endl;
        }
        else if(delta == 0){
            x1 = -b / (2 * a);
            cout << "�÷�����������ͬ��ʵ��: " << x1 << endl;
        }
        else{
            cout << "�÷���û��ʵ����" << endl; 
        }
        cout << "������a b c: ";
    }
    
    
    
    return 0;
}