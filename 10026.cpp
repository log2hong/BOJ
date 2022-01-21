#include <iostream>
#include <algorithm>
#include <queue>
#include <memory.h>
using namespace std;

int n;
int arr[101][101];
bool visited[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void BFS(int startX, int startY){
    queue<pair<int, int> > Q;
    Q.push(make_pair(startX, startY));
    visited[startX][startY] = true;
    char c = arr[startX][startY];

    while(!Q.empty()){
        int currX = Q.front().first;
        int currY = Q.front().second;
        Q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = currX + dx[i];
            int nextY = currY + dy[i];
            if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < n && !visited[nextX][nextY] && arr[nextX][nextY] == c){
                Q.push(make_pair(nextX, nextY));
                visited[nextX][nextY] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(int j = 0; j < str.size(); j++){
            arr[i][j] = str[j];
        }
    }

    int ans1 = 0, ans2 = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                BFS(i, j);
                ans1++;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'G') arr[i][j] = 'R';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                BFS(i, j);
                ans2++;
            }
        }
    }

    cout << ans1 << " " << ans2 << endl;
    return 0;
}