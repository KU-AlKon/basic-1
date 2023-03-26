#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int dwarf[9];

    int sum=0;
    for(int i=0; i<9; i++) {
        cin >> dwarf[i];
        sum += dwarf[i];
    }

    sum -= 100;

    for(int i=0; i<8; i++) {
        for(int j=i+1; j<9; j++) {
            if((dwarf[i] + dwarf[j]) == sum) {
                dwarf[i] = dwarf[j] = 0;
                break;
            }
        }
        if(!dwarf[i])
            break;
    }

    for(int i=0; i<9; i++){
        if(dwarf[i])
            cout << dwarf[i] << '\n';
    }

    cout << endl;
}
