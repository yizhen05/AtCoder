#include <bits/stdc++.h>
using namespace std;

int main()
{
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;

	double AB2 = pow(xb - xa, 2) + pow(yb - ya, 2);
	double BC2 = pow(xc - xb, 2) + pow(yc - yb, 2);
	double CA2 = pow(xa - xc, 2) + pow(ya - yc, 2);

	if (AB2 == BC2 + CA2 || BC2 == CA2 + AB2 || CA2 == AB2 + BC2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
