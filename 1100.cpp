#include <iostream>
using namespace std;

int main(){
    string arr[8];
    for(int i = 0; i < 8; i++) cin >> arr[i];
    
    int ans = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            ans += !((i + j) % 2) && (arr[i][j] == 'F');
    cout << ans << endl;
    return 0;
}