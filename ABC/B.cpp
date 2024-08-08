#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, l;
	cin >> n >> l;
	vector<string> s(n);
	for (int i = 0; i < n; i++) cin >> s[i];
	sort(s.begin(), s.end());
	string sum;
	for (int i = 0; i < n; i++) sum += s[i];
	cout << sum << endl;
	return 0;
}
