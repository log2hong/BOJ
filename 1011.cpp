#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int x, y, ans = 1;
        cin >> x >> y;

        int dist = y - x, curr = 1;
        for(int i = 2; curr < dist; i++){
            curr += i / 2;
            ans++;
        }
        if(curr > dist) ans--;
        cout << ans << endl;
    }
    return 0;
}