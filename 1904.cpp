#include <iostream>
using namespace std;

const int MAX_N = 1000000;
int arr[MAX_N + 1];

int main(){
    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i <= n; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    }
    cout << arr[n] << endl;
    return 0;
}