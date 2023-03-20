#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
const int MAX_NUM = 10000;
bool isPrime[MAX_NUM + 1];
int numOfChecked = 0;
vector<int> primes;
void sieve(int n){
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    if(primes.empty()){
        primes.push_back(2);
    }
    for(int i = 2; i <= n; ++i){
        if(isPrime[i]){
            if(i > *(primes.end()-1)){
                primes.push_back(i);
            }
            for(int j = i + i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
}
int primeChecker(int n){
    if(numOfChecked < n){
        sieve(n);
        numOfChecked = n;
    }
    if(isPrime[n] == true){
        return 1;
    }
    else{
        return 0;
    }
}
int sumOfPrime(int m, int n){
    int sum = 0;
    for(vector<int>::iterator it = primes.begin(); it != primes.end(); ++it){
        if((*it > m) && (*it < n)){
            sum += *it;
        }
        if(*it >= n){
            break;
        }
    }
    return sum;
}
int main(){
    int M, N;
    cout << "请依次输入M和N: ";
    while (cin >> M >> N)
    {
        if(N == 0){
            break;
        }
        if((M > N) || (M < 0) || (N < 0)){
            cout << "请输入合法值！" << endl;
            cout << "请依次输入M和N: ";
            continue;
        }
        cout << N << (primeChecker(N) ? "是" : "不是") << "素数!" << endl;
        cout << "大于" << M << "小于" << N << "的素数和为:" 
        << (sumOfPrime(M, N)) << endl;
        cout << "请依次输入M和N: ";
    }
    return 0;
}