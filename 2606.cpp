#include <iostream>
using namespace std;

int n, m, ans;
bool adj[101][101];
bool chk[101];

void DFS(int curr){
    ans++;
    chk[curr] = true;
    for(int i = 1; i <= n; i++){
        if(!chk[i] && adj[curr][i]) DFS(i);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a][b] = adj[b][a] = true;
    }
    DFS(1);
    cout << ans - 1 << endl;
    return 0;
}
