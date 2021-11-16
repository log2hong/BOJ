#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = n - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    delete[] arr;
    return 0;
}