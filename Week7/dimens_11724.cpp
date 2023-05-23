// 연결 요소의 개수 11724번 : https://www.acmicpc.net/problem/11724

#include <iostream>
#include <vector>
using namespace std;

int N, M; // N : 정점의 개수, M : 간선의 개수
int cnt = 0; // 연결 요소의 개수
vector<int> g[1001];
bool v[1001] = {false};

void dfs(int start){
    v[start] = true; // 방문 표시.
    
    for(auto nxt : g[start]){
        if(v[nxt]) continue;
        dfs(nxt);
    }

}

int main(){
    cin >> N >> M;
    
    for (int i = 0; i<M; i++){ // 간선 입력받기.
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i = 1; i<=N; i++){
        if(!v[i]) cnt++;
        dfs(i);
    }

    cout << cnt;

}
