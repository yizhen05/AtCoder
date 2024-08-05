#include <iostream>
#include <string>
#include <set>

using std::string;

int main()
{
	int n;
	std::cin >> n;
	std::set<string> set;
	for (int i = 1; i <= n; ++i)
	{
		string s;
		std::cin >> s;
		// std::set::insert(s).second は要素が追加されたかどうかを返す
		if (set.insert(s).second) std::cout << i << std::endl;
	}
}
