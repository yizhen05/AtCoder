#include <bits/stdc++.h>
using namespace std;

int main()
{
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
	return 0;
}