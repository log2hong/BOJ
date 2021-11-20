#include <iostream>
using namespace std;

int nextX[4] = {1, 0, -1, 0};
int nextY[4] = {0, 1, 0, -1};
int n, m;
bool **arr;

void DFS(int currX, int currY){
    arr[currY][currX] = false;
    for(int i = 0; i < 4; i++){
        if(currY + nextY[i] < 0) continue;
        if(currY + nextY[i] >= n) continue;
        if(currX + nextX[i] < 0) continue;
        if(currX + nextX[i] >= m) continue;
        if(arr[currY + nextY[i]][currX + nextX[i]] == true){
            DFS(currX + nextX[i], currY + nextY[i]);
        }
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int k;
        cin >> m >> n >> k;
        arr = new bool*[n];
        for(int i = 0; i < n; i++){
            arr[i] = new bool[m]();
        }
        
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            arr[y][x] = true;
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == true){
                    ans++;
                    DFS(j, i);
                }
            }
        }
        cout << ans << endl;
        
        for(int i = 0; i < n; i++){
            delete[] arr[i];
        }
        delete[] arr;
        
        t--;
    }
    return 0;
}
