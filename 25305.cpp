#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const int &a, const int &b){
    return a > b;
}

int main(){
    int N, k;
    cin >> N >> k;

    int* arr = new int[N];
    for(int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N, compare);
    cout << arr[k - 1] << endl;
    return 0;
}