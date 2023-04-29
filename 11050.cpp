#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int arr[11];
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i <= 10; i++) arr[i] = arr[i - 1] * i;
    cout << arr[n] / arr[k] / arr[n - k] << endl;
    return 0;
}