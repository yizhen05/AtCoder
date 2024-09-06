#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	int N       = S.size();
	S.at(N - 1) = '4';
	cout << S << endl;
	return 0;
}