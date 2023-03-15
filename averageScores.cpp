#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<double> scores;
    double a;
    for(int i = 0; i < 5; ++i)
    {
        cin >> a;
        scores.push_back(a);
    }
    sort(scores.begin(), scores.end(), greater<double>());
    for(vector<double>::iterator it = scores.begin(); it != scores.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    cout << (scores[1] + scores[2] + scores[3]) / 3 << endl;
    return 0;
}