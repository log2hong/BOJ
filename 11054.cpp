#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int* dp_forward = new int[n];
    for(int i = 0; i < n; i++){
        int val = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                val = max(val, dp_forward[j]);
            }
        }
        dp_forward[i] = val + 1;
    }

    int* dp_backward = new int[n];
    for(int i = n - 1; i >= 0; i--){
        int val = 0;
        for(int j = n - 1; j > i; j--){
            if(arr[j] < arr[i]){
                val = max(val, dp_backward[j]);
            }
        }
        dp_backward[i] = val + 1;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, dp_forward[i] + dp_backward[i]);
    }
    cout << ans - 1 << endl;

    delete[] arr;
    delete[] dp_forward;
    delete[] dp_backward;
    return 0;
}