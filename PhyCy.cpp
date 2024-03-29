#include <iostream>
#include <cstdio>

using namespace std;

const int N = 21252;
int main()
{
	int p, e, i, d, caseNo = 0;
	while( cin >> p >> e >> i >> d && p != -1)
	{
		++caseNo;
		int k;
		for(k = d+1; (k-p) % 23; ++k);
		for(; (k-e) % 28; k += 23);
		for(; (k-i) % 33; k += 23*28);
		cout << "Case " << caseNo << ": the next triple peak occurs in " 
			<< k-d << " days." << endl;
	}
	return 0;
}

