#include <iostream>
#include <string>

using namespace std;

int main() {
	int casenum;
	cin >> casenum;
	for (int i = 0; i < casenum; i++) {
		int score = 0;
		int gajung = 0;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				gajung++;
				score += gajung;
			}
			else if (str[j] == 'X') {
				gajung = 0;
				score += 0;

			}
		}
		cout << score << endl;
	}
	return 0;
}
