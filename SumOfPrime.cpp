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
    cout << "����������M��N: ";
    while (cin >> M >> N)
    {
        if(N == 0){
            break;
        }
        if((M > N) || (M < 0) || (N < 0)){
            cout << "������Ϸ�ֵ��" << endl;
            cout << "����������M��N: ";
            continue;
        }
        cout << N << (primeChecker(N) ? "��" : "����") << "����!" << endl;
        cout << "����" << M << "С��" << N << "��������Ϊ:" 
        << (sumOfPrime(M, N)) << endl;
        cout << "����������M��N: ";
    }
    return 0;
}