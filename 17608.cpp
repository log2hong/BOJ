#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int max_h = arr[n - 1];
    int cnt = 1;

    for(int i = n - 1; i >= 0; i--){
        if(max_h < arr[i]){
            cnt++;
            max_h = arr[i];
        }
    }

    delete[] arr;
    cout << cnt << endl;

    return 0;
}