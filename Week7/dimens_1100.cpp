#include <iostream>
using namespace std;

int main(){
    int N = 8;
    int whiteNum = 0;
    bool flag = true; // 현재 값이 흑이면 false, 백이면 true
    for(int i = 0; i<N; i++){
        string str;
        cin >> str;

        for(int j = 0; j<N; j++){
            if(flag){ // 현재 위치가 백인 경우.
                if(str[j] == 'F')
                    whiteNum++;
                flag = false;
                continue;
            }
            else{
                flag = true;
            }
            
        }
        if(flag)
            flag = false;
        else
            flag = true;
    }

    cout << whiteNum;
}
