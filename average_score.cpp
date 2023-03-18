#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<float> scores;
    cout << "请输入7个分数: ";
    float score;
    for(int i = 0; i < 7; ++i){
        cin >> score;
        scores.push_back(score);
    }
    sort(scores.begin(), scores.end(), greater<float>());
    float sum = 0;
    for(vector<float>::iterator it = scores.begin(); it != scores.end(); ++it){
        ptrdiff_t index = distance(scores.begin(), it);
        if(index < 6){
            cout << *it << " ";
            if(index > 0){
                sum += *it;
            }
        }
        else{
            cout << *it << endl;
        }
    }
    cout << "最终分数为: " << sum / 5 << "分" << endl;
    return 0;
}