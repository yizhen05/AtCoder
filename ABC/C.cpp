#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll N, M;
	cin >> N >> M;
	vector<ll> A(N);
	for (ll i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	ll left   = 0;
	ll right  = *max_element(A.begin(), A.end());
	ll answer = 0;

	while (left <= right)
	{
		ll mid   = left + (right - left) / 2;
		ll total = 0;

		for (ll i = 0; i < N; i++)
		{
			total += min(A[i], mid);
			if (total > M) break;
		}

		if (total <= M)
		{
			answer = mid;
			left   = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	if (answer == *max_element(A.begin(), A.end()))
	{
		cout << "infinite" << endl;
	}
	else
	{
		cout << answer << endl;
	}

	return 0;
}
