#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        for(int j = 0; j < (b - a + 1) / 2; j++){
            swap(arr[a - 1 + j], arr[b - 1 - j]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}