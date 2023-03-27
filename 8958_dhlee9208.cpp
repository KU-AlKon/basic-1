#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	string str;
	for (int i = 0; i < num; i++) {
		int score = 0;
		int streak = 0;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			switch (str.at(j)) {
			case 'O':
				score += ++streak;
				break;
			case 'X':
				streak = 0;
				break;
			}
		}
		cout << score << endl;
	}
}
