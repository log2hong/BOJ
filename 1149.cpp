#include <iostream>
using namespace std;

const int MAX_N = 1000;
int arr[MAX_N][3];

int main(){
    int n;
    cin >> n;
    cin >> arr[0][0] >> arr[0][1] >> arr[0][2];
    for(int i = 1; i < n; i++){
        int r, g, b;
        cin >> r >> g >> b;
        arr[i][0] = r + min(arr[i - 1][1], arr[i - 1][2]);
        arr[i][1] = g + min(arr[i - 1][0], arr[i - 1][2]);
        arr[i][2] = b + min(arr[i - 1][0], arr[i - 1][1]);
    }
    cout << min(min(arr[n - 1][0], arr[n - 1][1]), arr[n - 1][2]) << endl;
    return 0;
}