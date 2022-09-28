#include <iostream>
#include <string>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"};

string board[50];

int main() {
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++) cin >> board[i];

    int ans = 64;
    for(int i = 0; i + 8 <= N; i++){
        for(int j = 0; j + 8 <= M; j++){
            int cnt1 = 0, cnt2 = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(board[i + k][j + l] != WB[k][l]) cnt1++;
                    if(board[i + k][j + l] != BW[k][l]) cnt2++;
                }
            }
            if(cnt1 < ans) ans = cnt1;
            if(cnt2 < ans) ans = cnt2;
        }
    }

    cout << ans << endl;
    return 0;
}
