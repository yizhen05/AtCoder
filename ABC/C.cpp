#include <bits/stdc++.h>
using namespace std;

int main()
{
	int    N, K;
	string S;
	cin >> N >> K >> S;

	sort(S.begin(), S.end());
	set<string> uniquePermutations;
	do
	{
		uniquePermutations.insert(S);
	} while (next_permutation(S.begin(), S.end()));

	int count = 0;
	for (const auto& permutation : uniquePermutations)
	{
		bool hasKPalindrome = false;
		for (int i = 0; i <= permutation.size() - K; ++i)
		{
			bool isPalindrome = true;
			for (int j = 0; j < K / 2; ++j)
			{
				if (permutation[i + j] != permutation[i + K - 1 - j])
				{
					isPalindrome = false;
					break;
				}
			}
			if (isPalindrome)
			{
				hasKPalindrome = true;
				break;
			}
		}
		if (!hasKPalindrome)
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
