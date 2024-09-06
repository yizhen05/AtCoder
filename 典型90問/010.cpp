#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, int> calcSumPoint(vector<pair<int, int>>& sum_point, int start, int end)
{
	int sum_class1 = 0, sum_class2 = 0;

	for (int i = start - 1; i < end; i++)
	{
		int kurasu, point;
		tie(kurasu, point) = sum_point[i];
		if (kurasu == 1) sum_class1 += point;
		if (kurasu == 2) sum_class2 += point;
	}
	pair<int, int> sum = make_pair(sum_class1, sum_class2);

	return sum;
}

int main(void)
{
	int N;
	cin >> N;
	vector<pair<int, int>> student_point(N);
	//累積和
	int point_a = 0, point_b = 0;
	for (int i = 0; i < N; i++)
	{
		static int a, b;
		cin >> a >> b;
		student_point[i] = make_pair(a, b);
	}
	int Q;
	cin >> Q;
	pair<int, int> sum_point;

	//vector<pair<int, int>> quest(Q);
	for (int i = 0; i < Q; i++)
	{
		static int start, end;
		cin >> start >> end;
		// quest[i] = make_pair(start, end);

		static pair<int, int> ans;
		ans             = calcSumPoint(student_point, start, end);
		tie(start, end) = ans;

		cout << start << " " << end << endl;
	}
	return 0;
}