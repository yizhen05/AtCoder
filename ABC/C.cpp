#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll         N;
	vector<ll> L(N);
	vector<ll> R(N);
	cin >> N;
	for (ll i = 0; i < N; i++)
	{
		cin >> L[i] >> R[i];
	}
	vector<ll> x(N);
	vector<ll> sorted_l(N);
	vector<ll> sorted_r(N);

	copy(L.begin(), L.end(), sorted_l.begin());
	copy(R.begin(), R.end(), sorted_r.begin());

	// Sort the vectors
	sort(sorted_l.begin(), sorted_l.end());
	sort(sorted_r.begin(), sorted_r.end());

	ll L, R;
	ll count = 0;
	for (ll i = 0; i < N; i++)
	{
		ll li = -L[i];
		ll ri = -R[i];
	}
}