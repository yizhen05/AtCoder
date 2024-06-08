#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	getline(cin, S);

	int lower = 0;
	int upper = 0;
	for (char c : S) islower(c) ? lower++ : upper++;

	if (lower >= upper) transform(S.begin(), S.end(), S.begin(), ::tolower);
	if (upper > lower) transform(S.begin(), S.end(), S.begin(), ::toupper);

	cout << S << endl;
}