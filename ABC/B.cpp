#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int a, b, c, d, e, f;
	int g, h, i, j, k, l;

	cin >> a >> b >> c >> d >> e >> f;
	cin >> g >> h >> i >> j >> k >> l;

	bool x = max(a, g) < min(d, j);
	bool y = max(b, h) < min(e, k);
	bool z = max(c, i) < min(f, l);

	if (x && y && z)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}