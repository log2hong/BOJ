#include <iostream>
#include <algorithm>
#include <queue>
#include <memory.h>
using namespace std;

int n;
int adj[101][101];
int ans[101][101];
bool visited[101];

void BFS(int start){
    queue<int> Q;
    Q.push(start);

    while(!Q.empty()){
        int curr = Q.front();
        Q.pop();

        for(int i = 1; i <= n; i++){
            if(adj[curr][i] == 1 && !visited[i]){
                Q.push(i);
                visited[i] = true;
                ans[start][i] = 1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> adj[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        BFS(i);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}