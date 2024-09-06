#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int x = 0; x <= N; x++)
	{
		for (int y = 0; y <= N; y++)
		{
			for (int z = 0; z <= N; z++)
			{
				if (x + y + z <= N)
				{
					cout << x << " " << y << " " << z << endl;
				}
			}
		}
	}

	return 0;
}
