#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	int Si, Sj;
	cin >> Si >> Sj;
	Si--;
	Sj--;
	vector<vector<char>> C(H, vector<char>(W));
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> C[i][j];
		}
	}

	string X;
	cin >> X;

	for (char i : X)
	{
		if (i == 'L' && Sj - 1 >= 0 && C[Si][Sj - 1] == '.')
		{
			Sj--;
		}
		if (i == 'R' && Sj + 1 < W && C[Si][Sj + 1] == '.')
		{
			Sj++;
		}
		if (i == 'U' && Si - 1 >= 0 && C[Si - 1][Sj] == '.')
		{
			Si--;
		}
		if (i == 'D' && Si + 1 < H && C[Si + 1][Sj] == '.')
		{
			Si++;
		}
	}

	cout << (Si + 1) << " " << (Sj + 1) << endl;

	return 0;
}
