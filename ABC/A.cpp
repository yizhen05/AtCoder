#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K, X;
	cin >> N >> K >> X;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];
	vector<int> B = A;
	B.insert(B.begin() + K, X);
	for (int i : B) std::cout << i << " ";
	std::cout << std::endl;
	return 0;
}