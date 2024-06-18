#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
	ll H, W;
	cin >> H >> W;
	vector<vector<ll>> A(H, vector<ll>(W));
	for (ll i = 0; i < H; i++)
	{
		for (ll j = 0; j < W; j++)
		{
			cin >> A[i][j];
		}
	}
	vector<ll> row(H, 0);
	vector<ll> col(W, 0);
	for (ll i = 0; i < H; i++)
	{
		for (ll j = 0; j < W; j++)
		{
			row[i] += A[i][j];
			col[j] += A[i][j];
		}
	}
	//H,Wの2次元配列Bを作成。ゼロ埋め
	vector<vector<ll>> B(H, vector<ll>(W, 0));
	for (ll i = 0; i < H; i++)
	{
		for (ll j = 0; j < W; j++)
		{
			B[i][j] = row[i] + col[j] - A[i][j];
		}
	}

	for (ll i = 0; i < H; i++)
	{
		for (ll j = 0; j < W; j++) cout << B[i][j] << " ";
		cout << endl;
	}
	return 0;
}
