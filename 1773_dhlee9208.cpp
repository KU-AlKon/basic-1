#include<iostream>

using namespace std;


int main() {
	int N, C;
	cin >> N >> C;
	int* ptr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> ptr[i];
	}
	int total = 0;
	for (int time = 1; time <= C; time++) {
		bool flag = false;
		for (int j = 0; j < N; j++) {
			if (time % ptr[j] == 0) {
				flag = true;
				break;
			}
		}
		if (flag == true) {
			total += 1;
		}
	}
	cout << total;
}
