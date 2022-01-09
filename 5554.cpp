#include <iostream>
using namespace std;

int main(){
    int n, ans = 0;
    for(int i = 0; i < 4; i++){
        cin >> n;
        ans += n;
    }
    cout << ans / 60 << endl;
    cout << ans % 60 << endl;
    return 0;
}