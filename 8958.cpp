#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    string str;

    cin >> num;
    int result[num];

    for(int i=0; i < num; i++){
        cin >> str;

        int score = 0, sum = 1;
        for(int j=0; j<str.length(); j++){
            if(str[j] == 'O') {
                score += sum;
                sum++;
            }
            else
                sum = 1;
        }

        result[i] = score;
    }

    for(auto n : result)
        cout << n << '\n';

    cout << endl;
}