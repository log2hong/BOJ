#include <iostream>
using namespace std;

int par[1001];

int Find(int n){
    if(par[n] == n) return n;
    else return Find(par[n]);
}

void Union(int x, int y){
    x = Find(x);
    y = Find(y);
    if(x != y) par[y] = x;
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) par[i] = i;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(i == par[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}

