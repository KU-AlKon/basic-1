#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, M, V;

vector<int> g[1001];
bool v1[1001] = {false};
bool v2[1001] = {false};

void dfs(int cur){
    v1[cur] = true;
    cout << cur << " ";
    for(auto nxt : g[cur]){
        if(v1[nxt]) continue;
        dfs(nxt);
    }
}

void bfs(int cur){
    queue<int> q;
    v2[cur] = true;
    q.push(cur);

    while(!q.empty()){
        cur = q.front(); q.pop();
        cout << cur << " ";
        for (auto nxt : g[cur]){
            if(v2[nxt]) continue;
            v2[nxt] = true;
            q.push(nxt);
        }
    }
    
}

int main(){
    cin >> N >> M >> V;

    int a, b;
    for (int i = 0; i < M; i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 1; i<N+1; i++)
        sort(g[i].begin(), g[i].end());
    

    dfs(V);
    cout << "\n";
    bfs(V);

    return 0;
}
