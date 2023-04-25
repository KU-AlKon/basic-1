#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;
    string str[n];

    for(int i=0; i<n; i++)
        cin >> str[i];

    int max = 0;
    for(int i=0; i<n-1; i++) {
        if(n-i-1 < max) break;
        for(int j=0; j<m-1; j++) {
            for(int k=j+1; k<m; k++) {
                if(k-j > n-1-i) break;
                if(str[i][j] == str[i][k]){
                    if(k-j+i > n-1) continue;
                    if((str[i][j] == str[k-j+i][j]) && (str[i][j] == str[k-j+i][k]) && (k-j) > max){
                        max = k-j;
                    }
                }
            }
        }
    }

    cout << (max + 1) * (max + 1) << endl;
}