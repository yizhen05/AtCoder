#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> S(N);
	bool           flag = false;

	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
		if (S[i] == "sweet")
		{
			if (flag && i != N - 1)
			{
				cout << "No" << endl;
				return 0;
			}
			flag = true;
		}
		else
		{
			flag = false;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
