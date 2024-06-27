#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll A, B, C;
	cin >> A >> B >> C;
	ll g = __gcd(A, __gcd(B, C));
	ll a = A / g;
	ll b = B / g;
	ll c = C / g;

	ll cuts = a + b + c - 3;
	cout << cuts << endl;
	return 0;
}