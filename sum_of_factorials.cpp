#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int num = 1;
    for(int i = 1; i <= 10; ++i){
        num *= i;
        sum += num;
    }
    cout << "Sum of factorials is: " << sum << endl;
    return  0;
}