#include <iostream>
using namespace std;
int main(){
    int f1 = 0, f2 = 1, fi = 1, f = 0;
    int M;
    cout << "������M: ";
    cin >> M;
    while (f < M)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        ++fi;
    }
    if((M - f1) < (f2 - M)){
        cout << "��ӽ�" << M << "��һ��쳲�������Ϊ��" << fi-1 << "��: " << f1 << endl;
    }
    else{
        cout << "��ӽ�" << M << "��һ��쳲�������Ϊ��" << fi << "��: " << f2 << endl;
    }
    return 0;
}