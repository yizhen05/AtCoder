#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll Q;
	cin >> Q;

	unordered_map<ll, ll> ball_count;
	ll                    distinct_count = 0;
	vector<ll>            result;
	for (ll i = 0; i < Q; i++)
	{
		ll query_type;
		cin >> query_type;

		if (query_type == 1)
		{
			ll x;
			cin >> x;
			if (ball_count[x] == 0)
			{
				distinct_count++;
			}
			ball_count[x]++;
		}
		else if (query_type == 2)
		{
			ll x;
			cin >> x;
			ball_count[x]--;
			if (ball_count[x] == 0)
			{
				distinct_count--;
			}
		}
		else if (query_type == 3)
		{
			result.push_back(distinct_count);
		}
	}

	for (ll count : result) cout << count << endl;

	return 0;
}
