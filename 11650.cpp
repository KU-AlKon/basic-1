#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> p;

int main() {
	int n, x, y;
	vector<p> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(p(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}