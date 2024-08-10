#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n, t, a;
	cin >> n >> t >> a;
	if ((n / 2) <= t || (n / 2) <= a)
	{
		puts("Yes");
		return 0;
	}
	puts("No");
	return 0;
}
