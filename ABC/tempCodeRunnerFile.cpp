#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> S(N);
	int            M = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
		if (S[i].length() > M)
		{
			M = S[i].length();
		}
	}

	vector<string> T(M, string(N, '*'));

	for (int i = 0; i < N; i++)
	{
		int len = S[i].length();
		for (int j = 0; j < len; j++)
		{
			T[j][N - i - 1] = S[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		while (!T[i].empty() && T[i].back() == '*')
		{
			T[i].pop_back();
		}
	}

	for (int i = 0; i < M; i++)
	{
		cout << T[i] << endl;
	}

	return 0;
}
