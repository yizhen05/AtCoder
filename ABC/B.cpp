#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(2 * N);
	for (int i = 0; i < 2 * N; i++)
	{
		cin >> A.at(i);
	}
	int count = 0;
	for (int i = 0; i < 2 * N; i++)
	{
		if (A[i] == A[i + 2])
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}