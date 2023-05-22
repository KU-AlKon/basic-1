// 연결 요소의 개수 : 11724번 - https://www.acmicpc.net/problem/11724

#include <iostream>
using namespace std;

#define MAXSIZE 1001
bool edge[MAXSIZE][MAXSIZE] = {false};

int main(){
    int N, M; // N : 정점의 개수, M : 간선의 개수
    cin >> N >> M;
    
    int C = N; // 연결 요소의 개수.

    bool checked[MAXSIZE] = {false}; // 확인된 노드 true로 저장.

    for(int i = 0; i<M; i++){ // 간선 기록
        int a, b;
        cin >> a >> b;
        a -=1;
        b -=1;
        edge[a][b] = true;
        edge[b][a] = true;
    }

    for(int i = 0; i<N; i++){ // 모든 노드 탐색
        if(checked[i]) // 확인된 경우,
            continue;
        
        else{ // 확인되지 않은 노드의 경우.
            checked[i] = true; // 확인 표시.
            int changeCheckedNum = 0; // checked list를 true로 변경한 노드 수.

            for(int j=0; j<N; j++){
                if(edge[i][j]){// j노드와 연결된 경우,
                    changeCheckedNum++;
                    checked[j] = true;
                }
            }
            C -= changeCheckedNum;
        }
    }
    cout << C;
}
