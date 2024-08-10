#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int N;
	cin >> N;
	vector<vector<vector<int>>> A(N + 1, vector<vector<int>>(N + 1, vector<int>(N + 1, 0)));
	vector<vector<vector<int>>> S(N + 1, vector<vector<int>>(N + 1, vector<int>(N + 1, 0)));

	for (int x = 1; x <= N; x++)
	{
		for (int y = 1; y <= N; y++)
		{
			for (int z = 1; z <= N; z++)
			{
				cin >> A[x][y][z];
			}
		}
	}

	for (int x = 1; x <= N; x++)
	{
		for (int y = 1; y <= N; y++)
		{
			for (int z = 1; z <= N; z++)
			{
				S[x][y][z] = A[x][y][z]
				             + S[x - 1][y][z]
				             + S[x][y - 1][z]
				             + S[x][y][z - 1]
				             - S[x - 1][y - 1][z]
				             - S[x - 1][y][z - 1]
				             - S[x][y - 1][z - 1]
				             + S[x - 1][y - 1][z - 1];
			}
		}
	}

	int Q;
	cin >> Q;

	for (int i = 0; i < Q; i++)
	{
		int Lx, Rx, Ly, Ry, Lz, Rz;
		cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;

		int result = S[Rx][Ry][Rz]
		             - S[Lx - 1][Ry][Rz]
		             - S[Rx][Ly - 1][Rz]
		             - S[Rx][Ry][Lz - 1]
		             + S[Lx - 1][Ly - 1][Rz]
		             + S[Lx - 1][Ry][Lz - 1]
		             + S[Rx][Ly - 1][Lz - 1]
		             - S[Lx - 1][Ly - 1][Lz - 1];

		cout << result << endl;
	}

	return 0;
}