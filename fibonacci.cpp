#include <iostream>
using namespace std;
int main(){
    int f1 = 0, f2 = 1, fi = 1, f = 0;
    int M;
    cout << "请输入M: ";
    cin >> M;
    while (f < M)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        ++fi;
    }
    if((M - f1) < (f2 - M)){
        cout << "最接近" << M << "的一项斐波那契数为第" << fi-1 << "项: " << f1 << endl;
    }
    else{
        cout << "最接近" << M << "的一项斐波那契数为第" << fi << "项: " << f2 << endl;
    }
    return 0;
}