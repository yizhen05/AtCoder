#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int d = s.length();
	while (s.at(d - 1) != '.') d--;
	cout << s.substr(d) << endl;
	return 0;
}