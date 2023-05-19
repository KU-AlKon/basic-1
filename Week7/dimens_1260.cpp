#include <iostream>
#include <queue>
using namespace std;


#define MAXNUM 1010
bool edge[MAXNUM][MAXNUM] = {false};
queue<int> result;

void DFS(bool (&visit)[MAXNUM],int N, int v){
    if(visit[v] == true)// 방문한 경우
        return;
    
    else{// 방문하지 않은 경우.
        visit[v] = true; // 방문한 상태로 변경
        result.push(v);
        for(int i = 1; i <= N; i++){
            if(edge[v][i]) // 연결되어 있는 경우
                DFS(visit, N, i);
        }
    }
}



void BFS(bool (&visit)[MAXNUM], queue<int> q, int N, int v){
    if(visit[v])// 방문했으면
        return;
    else{
        visit[v] = true;
        result.push(v);
        for(int i = 1; i<= N; i++){ // v에 연결된 모든 노드 큐에 넣기.
            if(edge[v][i]) // 연결되어 있는 경우
            {
                if(visit[i]) // 방문한 경우.
                    continue;
                else // 방문하지 않은 경우.
                    q.push(i);
            }
        }
        if(q.empty()){
            return;
        }
        else{
            v = q.front();
            q.pop();
            BFS(visit, q, N, v);
        }
    }
}

void printResult(){ // 결과 출력
    while(!result.empty()){
        cout << result.front();
        result.pop();
        if(result.empty()) // 뒤 공백 제거.
            return;
        else
            cout << " ";
        
    }
}

int main(){
    int N, M, V;
    cin >> N >> M >> V;
    static int n = N;


    for(int i = 1; i<M+1; i++){ // 간선 저장
        int a, b;
        cin >> a >> b;
        edge[a][b] = true;
        edge[b][a] = true;
    }
    

    // 연결된 간선이 있는지 확인.
    // bool isEdge = false;
    // for(int i = 0; i<N; i++){
    //     if(edge[V][i]){
    //         isEdge = true;
    //         break;
    //     }
    // }
    // if (!isEdge){ // 연결된 간선이 없으면 종료.
    //     return 0;
    // }

    
    bool dfsVisit[MAXNUM] = {false};
    DFS(dfsVisit, N, V);
    printResult();

    cout << "\n";

    bool bfsVisit[MAXNUM] = {false};
    queue<int> bfsQ;
    BFS(bfsVisit, bfsQ, N, V);
    printResult();
}
