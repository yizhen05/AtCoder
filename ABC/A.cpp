#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A == 5 && B == 5 && C == 7)
	{
		puts("YES");
		return 0;
	}
	if (A == 5 && B == 7 && C == 5)
	{
		puts("YES");
		return 0;
	}
	if (A == 7 && B == 5 && C == 5)
	{
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
}
