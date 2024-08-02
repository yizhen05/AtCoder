#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> generate_new_seed(const vector<int>& seed1, const vector<int>& seed2, int M)
{
	vector<int> new_seed(M);
	for (int i = 0; i < M; ++i)
	{
		new_seed[i] = rand() % 2 == 0 ? seed1[i] : seed2[i];
	}
	return new_seed;
}

int main()
{
	srand(time(0));
	int N, M, T;
	cin >> N >> M >> T;

	int                 seed_count = 2 * N * (N - 1);
	vector<vector<int>> X(seed_count, vector<int>(M));

	for (int i = 0; i < seed_count; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> X[i][j];
		}
	}

	for (int t = 0; t < T; t++)
	{
		vector<vector<int>> A(N, vector<int>(N));

		vector<int> indices(seed_count);
		for (int i = 0; i < seed_count; ++i) indices[i] = i;
		random_shuffle(indices.begin(), indices.end());

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				A[i][j] = indices[i * N + j];
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << A[i][j];
				if (j < N - 1)
				{
					cout << " ";
				}
				else
				{
					cout << endl;
				}
			}
		}
		cout.flush();

		vector<vector<int>> new_seeds;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N - 1; j++)
			{
				new_seeds.push_back(generate_new_seed(X[A[i][j]], X[A[i][j + 1]], M));
			}
		}

		for (int j = 0; j < N; j++)
		{
			for (int i = 0; i < N - 1; i++)
			{
				new_seeds.push_back(generate_new_seed(X[A[i][j]], X[A[i + 1][j]], M));
			}
		}

		X = new_seeds;

		for (int i = 0; i < seed_count; i++)
		{
			for (int j = 0; j < M; j++)
			{
				cin >> X[i][j];
			}
		}
	}

	return 0;
}
