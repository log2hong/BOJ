#include <iostream>
using namespace std;

int arr[5];

int Divcnt(int n){
    int ret = 0;
    for(int i = 0; i < 5; i++){
        if(n % arr[i] == 0) ret++;
    }
    return ret;
}

int main(){
    for(int i = 0; i < 5; i++) cin >> arr[i];
    int ans = 1;
    while(Divcnt(ans) < 3) ans++;
    cout << ans << endl;
    return 0;
}