#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 9;
int board[SIZE][SIZE];
vector<pair<int, int> > coords;
int zeros;

int ans[SIZE][SIZE];

bool isAvailable(int val, int x, int y){
    for(int i = 0; i < SIZE; i++){
        if(board[i][y] == val || board[x][i] == val)
            return false;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[(x / 3) * 3 + i][(y / 3) * 3 + j] == val)
                return false;
        }
    }
    return true;
}

void solve(int depth){
    if(depth == zeros){
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                ans[i][j] = board[i][j];
            }
        }
        return;
    }
    for(int i = 1; i <= 9; i++){
        if(isAvailable(i, coords[depth].first, coords[depth].second)){
            board[coords[depth].first][coords[depth].second] = i;
            solve(depth + 1);
            board[coords[depth].first][coords[depth].second] = 0;
        }
    }
}

int main(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> board[i][j];
            if(board[i][j] == 0){
                coords.push_back(make_pair(i, j));
                zeros++;
            }
        }
    }
    solve(0);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}