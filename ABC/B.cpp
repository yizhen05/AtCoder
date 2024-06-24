#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
<<<<<<< HEAD
	ll H, W, N;
	cin >> H >> W >> N;
=======
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
>>>>>>> 9ac7a88a00e2eb591ebb03102ce23683fa9211ad
	return 0;
}