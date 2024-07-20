#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, T, P;
	cin >> N >> T >> P;
	vector<int> L(N);
	int         count = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> L[i];
		if (L[i] >= T)
		{
			count++;
			if (count >= P)
			{
				cout << "0" << endl;
				return 0;
			}
		}
	}

	int days = 0;

	while (count < P)
	{
		days++;
		for (int i = 0; i < N; i++)
		{
			if (L[i] < T)
			{
				L[i]++;
				if (L[i] == T)
				{
					count++;
					if (count == P)
					{
						cout << days << endl;
						return 0;
					}
				}
			}
		}
	}

	return 0;
}
