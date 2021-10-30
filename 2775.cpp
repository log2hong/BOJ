#include <iostream>
using namespace std;

int main(){
    int arr[15][15] = {};
    for(int i = 1; i <= 14; i++) arr[0][i] = i;
    for(int i = 1; i <= 14; i++){
        for(int j = 1; j <= 14; j++){
            for(int k = 1; k <= j; k++){
                arr[i][j] += arr[i-1][k];
            }
        }
    }
    
    int T, k, n;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }
    
    return 0;
}
