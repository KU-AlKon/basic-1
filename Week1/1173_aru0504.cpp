#include <bits/stdc++.h>
using namespace std;

int a[2020202];
int main(){
	int N, C, t, ans = 0; cin >> N >> C;
	for(int i = 0; i < N; i++){
		cin >> t;
		for(int i = t; i <= C; i += t)
			a[i] = 1;
	}
	for(int i = 1; i <= C; i++) if (a[i]) ans++;
	cout << ans << '\n';
	return 0;
}
