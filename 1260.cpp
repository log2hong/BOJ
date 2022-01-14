#include <iostream>
#include <queue>
#include <memory.h>
using namespace std;

int n, m, v;
bool adj[1001][1001];
bool chk[1001];

void DFS(int curr){
    chk[curr] = true;
    cout << curr << " ";
    for(int i = 1; i <= n; i++){
        if(!chk[i] && adj[curr][i]) DFS(i);
    }
}

void BFS(int start){
    queue<int> Q;
    Q.push(start);
    chk[start] = true;
    while(!Q.empty()){
        int curr = Q.front();
        Q.pop();
        cout << curr << " ";
        for(int i = 1; i <= n; i++){
            if(!chk[i] && adj[curr][i]){
                Q.push(i);
                chk[i] = true;
            }
        }
    }
}

int main(){
    cin >> n >> m >> v;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a][b] = adj[b][a] = true;
    }
    DFS(v);
    cout << endl;
    memset(chk, false, sizeof(chk));
    BFS(v);

    return 0;
}