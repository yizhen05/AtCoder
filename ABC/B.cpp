#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	int first_max = 0, second_max = 0;
	int first_index = 0, second_index = 0;

	for (int i = 0; i < N; i++)
	{
		if (A[i] > first_max)
		{
			second_max   = first_max;
			second_index = first_index;
			first_max    = A[i];
			first_index  = i;
		}
		else if (A[i] > second_max)
		{
			second_max   = A[i];
			second_index = i;
		}
	}

	cout << second_index + 1 << endl;

	return 0;
}
