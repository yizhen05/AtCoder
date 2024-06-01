#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int>         A(M);
	vector<vector<int>> X(N, vector<int>(M));
	vector<int>         intake(M, 0);

	for (int i = 0; i < M; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> X[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			intake[j] += X[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		if (intake[i] < A[i])
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}