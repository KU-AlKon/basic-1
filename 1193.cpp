#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, size = 1, i = 1;
	int r, c;
	cin >> x;

	for (int j = 1, sum = 0;; i += sum, j += sum + 1) {
		if (x >= i && x <= j)
			break;
		sum++;
		size++;
	}

	if (size % 2 == 0) {
		r = 1;
		c = size;

		while (true) {
			if (x == i) break;
			r++;
			c--;
			i++;
		}
	}
	else {
		r = size;
		c = 1;

		while (true) {
			if (x == i) break;
			r--;
			c++;
			i++;
		}
	}

	cout << r << "/" << c;
}