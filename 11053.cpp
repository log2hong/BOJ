#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    int* lis = new int[n];

    int idx = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(idx == 0){
            lis[idx] = arr[i];
            idx++;
        }
        else{
            if(lis[idx - 1] < arr[i]){
                lis[idx] = arr[i];
                idx++;
            }
            else{
                lis[lower_bound(lis, lis + idx, arr[i]) - lis] = arr[i];
            }
        }    
    }

    cout << idx << endl;

    delete[] arr, lis;
    return 0;
}