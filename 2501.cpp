#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    bool flag = false;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cnt++;

        if(cnt == k){
            cout << i << endl;
            flag = true;
            break;
        }
    }

    if(!flag) cout << 0 << endl;

    return 0;
}