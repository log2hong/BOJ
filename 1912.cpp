#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    cin >> arr[0];
    int ans = arr[0];
    for(int i = 1; i < n; i++){
        int temp;
        cin >> temp;
        arr[i] = max(temp, arr[i - 1] + temp);
        ans = max(ans, arr[i]);
    }
    cout << ans << endl;
    
    delete[] arr;
    return 0;
}