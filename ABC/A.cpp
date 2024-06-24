#include <bits/stdc++.h>
using namespace std;

int main()
{
<<<<<<< HEAD
	string s;
	cin >> s;
	int d = s.length();
	while (s.at(d - 1) != '.') d--;
	cout << s.substr(d) << endl;
=======
	int N;
	cin >> N;
	vector<string> S(N);
	int            count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> S.at(i);
		if (S.at(i) == "Takahashi")
		{
			count++;
		}
	}
	cout << count << endl;
>>>>>>> 9ac7a88a00e2eb591ebb03102ce23683fa9211ad
	return 0;
}