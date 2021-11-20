#include <iostream>
#include <queue>
using namespace std;

bool visited[100001];
queue<pair<int, int>> Q;
int walk[] = {-1, 1};
int n, k;

void BFS(){
    Q.push({n, 0});
    visited[n] = true;
    
    while(!Q.empty()){
        int curr = Q.front().first;
        int t = Q.front().second;
        Q.pop();
        
        if(curr == k){
            cout << t << endl;
            break;
        }
        for(int i = 0; i < 3; i++){
            int next = curr + (i < 2 ? walk[i] : curr);
            if(next < 0 || next > 100000) continue;
            if(!visited[next]){
                visited[next] = true;
                Q.push({next, t + 1});
            }
        }
    }
    return;
}

int main(){
    cin >> n >> k;
    BFS();
    return 0;
}
