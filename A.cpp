#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> H(N);
	for (int i = 0; i < N; i++) cin >> H.at(i);

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		count += H.at(i);
		if (count > M)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << N << endl;
	return 0;
}