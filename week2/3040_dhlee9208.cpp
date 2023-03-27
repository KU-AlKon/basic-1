#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec;

	for (int i = 0; i < 9; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	while (true) {
		int sum = 0;
		random_shuffle(vec.begin(), vec.end());
		vector<int>::iterator it = vec.begin();
		for (it = vec.begin(); it != vec.end()-2; it++) {
			sum += *it;
		}
		if (sum == 100)
			break;
	}
	vector<int>::iterator it = vec.begin();
	for (it = vec.begin(); it != vec.end() - 2; it++) {
		cout << *it << endl;
	}

}
