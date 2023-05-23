// 바이러스 2606번 : https://www.acmicpc.net/problem/2606

#include <iostream>
#include <vector>
using namespace std;

vector<int> g[101];
bool v[101] = {false};
int cnt = 0;
int N, M;

void dfs(int start){
    v[start] = 1;
    
    for (auto nxt: g[start]){
        if(v[nxt]) continue;
        dfs(nxt);
        cnt++;
    }
}

int main(){
    int a, b; // N : 컴퓨터 수, M : 컴퓨터 쌍의 수
    cin >> N >> M;

    for (int i = 0; i<M; i++){ // 그래프 그리기
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1);
    cout << cnt;

}
