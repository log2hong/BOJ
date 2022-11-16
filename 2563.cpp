#include <iostream>
using namespace std;

bool arr[100][100];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                arr[x+j][y+k] = true;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            ans += arr[i][j];
        }
    }
    
    cout << ans << endl;
}