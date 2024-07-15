#include <bits/stdc++.h>
using namespace std;

int main()
{
<<<<<<< HEAD
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
=======
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
>>>>>>> 9352d102bdddec1865bb613d777b669a384ef9b5

	double AB2 = pow(xb - xa, 2) + pow(yb - ya, 2);
	double BC2 = pow(xc - xb, 2) + pow(yc - yb, 2);
	double CA2 = pow(xa - xc, 2) + pow(ya - yc, 2);

	if (AB2 == BC2 + CA2 || BC2 == CA2 + AB2 || CA2 == AB2 + BC2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
