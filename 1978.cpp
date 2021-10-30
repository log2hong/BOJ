#include <iostream>
using namespace std;

int main(){
    bool* arr = new bool[1001]();
    arr[0] = arr[1] = 1;
    for(int i = 2; i <= 1000; i++){
        if(!arr[i]){
            for(int j = i * 2; j <= 1000; j += i){
                arr[j] = true;
            }
        }
    }
    
    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        ans += !arr[temp];
    }
    cout << ans << endl;
    return 0;
}
