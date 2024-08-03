#include <bits/stdc++.h>
using namespace std;

int main()
{
	int    N;
	string S;
	cin >> N >> S;

	char pre_hand = ' ';
	int  max_win  = 0;

	for (int i = 0; i < N; ++i)
	{
		char takahashi_hand;

		if (S[i] == 'R')
		{
			takahashi_hand = 'P';
		}
		else if (S[i] == 'P')
		{
			takahashi_hand = 'S';
		}
		else
		{
			takahashi_hand = 'R';
		}

		if (takahashi_hand == pre_hand)
		{
			if (takahashi_hand == 'P')
			{
				takahashi_hand = 'R';
			}
			else if (takahashi_hand == 'R')
			{
				takahashi_hand = 'S';
			}
			else
			{
				takahashi_hand = 'P';
			}
		}
		if (takahashi_hand != pre_hand && ((S[i] == 'R' && takahashi_hand == 'P') || (S[i] == 'P' && takahashi_hand == 'S') || (S[i] == 'S' && takahashi_hand == 'R')))
		{
			max_win++;
		}

		pre_hand = takahashi_hand;
	}

	cout << max_win << endl;

	return 0;
}
