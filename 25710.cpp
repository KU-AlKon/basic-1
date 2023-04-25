#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;

    cin >> n;

    int count[1000] = {0, };

    for(int i=0; i<n; i++){
        cin >> a;
        count[a]++;
    }

    int max=0;
    string mul;
    for(int i=1; i<1000; i++){      // 1~999
        if(count[i] == 0) continue;
        for(int j=i+(count[i]<2); j<1000; j++){
            if(count[j] == 0) continue;
            mul = to_string(i * j);
            int sum = 0;
            for(int k=0; k<mul.length(); k++) {
                sum += mul[k] - '0';
            }
            if(sum > max)
                max = sum;
        }
    }

    cout << max << '\n';
}