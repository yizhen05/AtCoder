#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll N, Q;
	cin >> N >> Q;

	vector<ll> A(N);
	for (ll i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	vector<ll> B(Q), k(Q);
	for (ll j = 0; j < Q; j++)
	{
		cin >> B[j] >> k[j];
	}

	for (ll j = 0; j < Q; j++)
	{
		vector<ll> distances(N);

		// Calculate distances from B[j] to each A[i]
		for (ll i = 0; i < N; i++)
		{
			distances[i] = abs(A[i] - B[j]);
		}

		// Sort distances
		sort(distances.begin(), distances.end());

		// Output the k[j]-th smallest distance (1-indexed)
		cout << distances[k[j] - 1] << endl;
	}

	return 0;
}
