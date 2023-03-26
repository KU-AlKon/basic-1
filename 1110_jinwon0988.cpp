#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int tmp1 = n, tmp2;
	int count = 0;

	while (true) {
		if (tmp1 < 10) {
			tmp2 = 0 + (tmp1 % 10);
		}
		else {
			tmp2 = (tmp1 / 10) + (tmp1 % 10);
		}

		tmp1 = (tmp1 % 10) * 10 + (tmp2 % 10);

		count++;
		if (n == tmp1) break;
	}

	cout << count;
}
