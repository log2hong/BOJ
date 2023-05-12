#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    int* lis = new int[n];
    int* index = new int[n];

    int idx = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(idx == 0){
            index[i] = idx;
            lis[idx] = arr[i];
            idx++;
        }
        else{
            if(lis[idx - 1] < arr[i]){
                index[i] = idx;
                lis[idx] = arr[i];
                idx++;
            }
            else{
                index[i] = lower_bound(lis, lis + idx, arr[i]) - lis;
                lis[index[i]] = arr[i];
            }
        }    
    }
    
    cout << idx << endl;

    int* ans = new int[idx];
    int k = 0;
    for(int i = n - 1; i >= 0; i--){
        if(idx == index[i] + 1){
            ans[k++] = arr[i];
            idx--;
        }
    }
    for(int i = k - 1; i >= 0; i--){
        cout << ans[i] << ' ';
    }

    delete[] arr;
    delete[] lis;
    delete[] index;
    delete[] ans;
    return 0;
}