#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, x1, x2, delta;
    cout << "请输入a b c: ";
    while (cin >> a >> b >> c)
    {
        if(a == 0){
            break;
        }
        delta = b * b - 4 * a * c;
        if(delta > 0){
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "该方程有两个不相等实根，分别为: " << x1 <<" " << x2 << endl;
        }
        else if(delta == 0){
            x1 = -b / (2 * a);
            cout << "该方程有两个相同的实根: " << x1 << endl;
        }
        else{
            cout << "该方程没有实根！" << endl; 
        }
        cout << "请输入a b c: ";
    }
    
    
    
    return 0;
}