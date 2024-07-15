#include <bits/stdc++.h>
using namespace std;

int main()
{
<<<<<<< HEAD
	int    R, G, B;
	string C;
	cin >> R >> G >> B;
	cin >> C;

	if (C == "Red") cout << min(G, B) << endl;
	else if (C == "Green")
		cout << min(R, B) << endl;
	else
		cout << min(R, G) << endl;
=======
	int N, K, X;
	cin >> N >> K >> X;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];
	vector<int> B = A;
	B.insert(B.begin() + K, X);
	for (int i : B) std::cout << i << " ";
	std::cout << std::endl;
>>>>>>> 9352d102bdddec1865bb613d777b669a384ef9b5
	return 0;
}