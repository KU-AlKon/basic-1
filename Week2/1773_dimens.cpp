// 폭죽쇼 : https://www.acmicpc.net/problem/1773

#include <iostream>
using namespace std;

int main(){
    int N, C; // N : 학생 수, C : 끝나는 시간
    cin >> N >> C;

    int T[N]; // 학생별 폭죽 주기

    for (int i = 0; i < N; i++) // 학생별 폭죽 주기 초기화
        cin >> T[i];


    bool F[C]; // 초별, 폭죽 터짐 여부
    for (int i = 0; i < C; i++) // F 배열 초기화, O(N)
        F[i] = false;

    for (int i = 0; i < N; i++){ // 폭죽 터짐 여부 주기별로 F 배열에 true로 표시. O(N^2) (단, N == C인 경우. 본 문제의 경우, C == N^3이므로, O(N^4/3). )
        int t = T[i];
        for (int j = -1; j < C; j += t)
            F[j] = true;
    }

    int fireNum = 0; // 폭죽 터진 횟수
    for (int i = 0; i < C; i++){ // F에 저장된 값 true 값의 개수를 fireNum에 저장.
        if (F[i])
            fireNum++;
    }

    cout << fireNum;
}