#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    vector<int> v;

    cin >> n >> c;

    for(int i=0; i<n; i++){
        int cycle;
        cin >> cycle;
        v.push_back(cycle);
    }

    int count = 0;
    for(int i=1; i<=c; i++) {
        for(int j=0; j<n; j++) {
            if((i % v[j]) == 0) {
                count++;
                break;
            }

        }
    }

    cout << count << endl;
}
