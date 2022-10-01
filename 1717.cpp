#include <iostream>
using namespace std;

int parent[1000010];

int Find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = Find(parent[x]);
}

void Union(int x, int y){
    x = Find(x);
    y = Find(y);
    if(x != y) parent[x] = y;
}

void Init(int n){
    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    Init(n);

    int op, a, b;
    for(int i = 0; i < m; i++){
        cin >> op >> a >> b;
        if(op == 0) Union(a, b);
        else{
            if(Find(a) == Find(b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}