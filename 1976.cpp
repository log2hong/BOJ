#include <iostream>
using namespace std;

int parent[201];

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

    int tmp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> tmp;
            if(tmp == 1) Union(i, j);
        }
    }

    int p;
    cin >> p;
    p = Find(p);
    bool flag = true;
    
    for(int i = 1; i < m; i++){
        int tmp;
        cin >> tmp;
        if(Find(p) != Find(tmp)){
            flag = false;
            break;
        }
    }
    
    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}