#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, S;
	cin >> N >> S;
	vector<int> apple(N), pine(N);
	for (int i = 0; i < N; i++) cin >> apple.at(i);
	for (int j = 0; j < N; j++) cin >> pine.at(j);

	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (apple.at(i) + pine.at(j) == S) ans++;
		}
	}
	cout << ans << endl;
}