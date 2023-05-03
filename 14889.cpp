#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_N = 20;

int n, ans = 99999999;
int S[MAX_N][MAX_N];
bool visited[MAX_N];

void dfs(int idx, int depth){
    vector<int> start_idx, link_idx;
    int start_score = 0, link_score = 0;
    if(depth == (n / 2)){
        for(int i = 0; i < n; i++){
            if(visited[i]) start_idx.push_back(i);
            else link_idx.push_back(i);
        }
        for(auto i: start_idx){
            for(auto j: start_idx){
                start_score += S[i][j];
            }
        }
        for(auto i: link_idx){
            for(auto j: link_idx){
                link_score += S[i][j];
            }
        }
        if(abs(start_score - link_score) < ans){
            ans = abs(start_score - link_score);
        }
        return;
    }
    for(int i = idx; i < n; i++){
        if(visited[i]) continue;
        else{
            visited[i] = true;
            dfs(i, depth + 1);
            visited[i] = false;
        }
    }

}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> S[i][j];
        }
    }

    dfs(0, 0);
    cout << ans << endl;
    return 0;
}