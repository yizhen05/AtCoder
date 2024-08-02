#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll N, X, Y;
	cin >> N >> X >> Y;
	vector<ll> A(N), B(N);

	for (ll i = 0; i < N; i++) cin >> A[i];
	for (ll i = 0; i < N; i++) cin >> B[i];

	sort(A.begin(), A.end(), greater<ll>());

	ll sweetSum   = 0;
	ll sweetCount = N;
	for (ll i = 0; i < N; i++)
	{
		sweetSum += A[i];
		if (sweetSum > X)
		{
			sweetCount = i + 1;
			break;
		}
	}

	// しょっぱさ基準で降順にソート
	sort(B.begin(), B.end(), greater<ll>());

	ll saltySum   = 0;
	ll saltyCount = N;
	for (ll i = 0; i < N; i++)
	{
		saltySum += B[i];
		if (saltySum > Y)
		{
			saltyCount = i + 1;
			break;
		}
	}

	cout << min(sweetCount, saltyCount) << endl;

	return 0;
}
