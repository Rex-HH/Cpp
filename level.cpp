#include <iostream>
using namespace std;
int main()
{ 
    int n;
    while (cin >> n)
    {
        if(n >= 0)
        {
            if(n >= 90)
                cout << "A" << endl;
            else if((n >= 80) && (n <= 89))
                cout << "B" << endl;
            else if((n >= 70) && (n <= 79))
                cout << "C" << endl;
            else if((n >= 60) && (n <= 69))
                cout << "D" << endl;
            else
                cout << "E" << endl;
        }
        else
            return 0;
    }
    
    return 0;
}