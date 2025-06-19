#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int n, m;
	string s;
	vector<char> v;
	cin >> n >> m;
	cin >> s;
	for (auto c : s)
		v.push_back(c);
	auto pnt = v.end();
	for (int i = 0; i < m; i++) {
		char command;
		cin >> command;
		if (command == 'L') {
			if (pnt != v.begin())
			{
				pnt--;
			}
		}
		else if (command == 'R') {
			if (pnt != v.end())
			{
				pnt++;
			}
		}
		else if (command == 'D') {
			if (pnt != v.end() && !v.empty()) {
				pnt = v.erase(pnt);
			}
		}
		else if (command == 'P') {
			char c;
			cin >> c;
			pnt = v.insert(pnt, c);
			pnt++;
		}
	}
	for (auto c : v) {
		cout << c;
	}

	return 0;
}
