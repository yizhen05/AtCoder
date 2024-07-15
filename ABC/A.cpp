#include <bits/stdc++.h>
using namespace std;

int main()
{
	int    R, G, B;
	string C;
	cin >> R >> G >> B;
	cin >> C;

	if (C == "Red") cout << min(G, B) << endl;
	else if (C == "Green")
		cout << min(R, B) << endl;
	else
		cout << min(R, G) << endl;
	return 0;
}