#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 100) cout << n << endl;
    else{
        int cnt = 99;
        for(int i = 100; i <= n; i++){
            if((i % 100 / 10) - (i / 100) == (i % 10) - (i % 100) / 10){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
