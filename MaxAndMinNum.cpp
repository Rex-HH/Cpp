#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "��������Ȼ������: ";
    cin >> n;
    vector<int> nums;
    cout << "������" << n << "����Ȼ��: ";
    int num;
    for(int i = 0; i < n; ++i){
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end(), greater<int>());
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
         if(it != nums.end()-1){
            cout << *it << " "; 
         }
         else{
            cout << *it;
         }
    }
    cout << endl;
    cout << "MAX: " << *max_element(nums.begin(), nums.end()) << "; "
    << "MIN: " << *min_element(nums.begin(), nums.end()) << ";" << endl;
    return 0;
}