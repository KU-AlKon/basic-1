// OX 퀴즈 : https://www.acmicpc.net/problem/8958
// 질문. for문에서 값을 참조할 때, 루프를 돌 때마다 값을 참조하는가?


#include <iostream>
#include <list>
using namespace std;

int main(){
    int N; // 입력받을 줄 수
    cin >> N;

    for (int i = 0; i<N; i++){
        string OX;
        cin >> OX;
        int s = 0; // 문제 당, 점수.
        int score = 0; // 전체 점수.

        for (int i = 0; i < OX.length(); i++){
            if (OX[i] == 'O'){ // O인 경우, 문제 당 점수 +1된 값 전체 점수에 더하기.
                s++;
                score += s;
            }
            else
                s = 0; // X인 경우, 문제 당 점수 0으로 초기화.
        }
        cout << score << "\n";
    }

}