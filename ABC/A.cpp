#include <bits/stdc++.h>
using namespace std;

int main()
{
<<<<<<< HEAD
	int R;
	cin >> R;
	if (R < 100)
	{
		cout << 100 - R << endl;
		return 0;
	}
	if (R < 200)
	{
		cout << 200 - R << endl;
		return 0;
	}
	if (R < 300)
	{
		cout << 300 - R << endl;
		return 0;
	}
	if (R < 400)
	{
		cout << 400 - R << endl;
		return 0;
	}
=======
	int    R, G, B;
	string C;
	cin >> R >> G >> B;
	cin >> C;

	if (C == "Red") cout << min(G, B) << endl;
	else if (C == "Green")
		cout << min(R, B) << endl;
	else
		cout << min(R, G) << endl;
>>>>>>> 85fe0bf52d3d4bd9bf1e554b931966e4da013ffc
	return 0;
}