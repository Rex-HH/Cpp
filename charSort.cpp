#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MAX_LEN = 100;
int main(){
    char a[MAX_LEN];
    cin.get(a, MAX_LEN);
    int len = strlen(a);
    cout << len << endl;
    sort(a, a + len);
    cout << a << endl;
    return 0;
}