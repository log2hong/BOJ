#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool visited[9];
vector<int> v;

void backtracking(int depth){
    if(depth == m){
        for(auto it = v.begin(); it != v.end(); it++){
            cout << *it << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            visited[i] = true;
            v.push_back(i);
            backtracking(depth + 1);
            v.pop_back();
            visited[i] = false;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    backtracking(0);
    return 0;
}