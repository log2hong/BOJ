#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int h, w, n, row, col;
        cin >> h >> w >> n;
        
        if(n % h == 0) cout << h * 100 + n / h << endl;
        else cout << (n % h) * 100 + n / h + 1 << endl;
    }
    return 0;
}