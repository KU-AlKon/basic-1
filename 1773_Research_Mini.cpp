#include <iostream>
#include <cstring>
using namespace std;
 
int bomb[2000001];
 
int main(int argc, char* argv[])
{
	
	int count = 0;
	int timing[100];
  int N, C;
 
	cin >> N >> C;
 
	for (int i = 0; i < N; i++) {
		cin >> timing[i];
	}
 
	for (int i = 0; i < N; i++) {
		for (int j = timing[i]; j <= C; j += timing[i]) {
			bomb[j] = 1;
		}
	}
 
	for (int i = 0; i <= C; i++) {
		if (bomb[i] == 1) {
			count++;
		}
	}
 
	cout << count << endl;
 
	return 0;
}
