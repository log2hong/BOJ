#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* cnt = new int[8001]();
    int* arr = new int[n];

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt[arr[i] + 4000]++;
        sum += arr[i];
    }
    int mean = round((double) sum / (double) n);
    mean = mean < 0 && mean > -0.5 ? -mean : mean;
    sort(arr, arr + n);

    int mode_cnt = *max_element(cnt, cnt + 8001);
    int temp = 0, mode = -1;
    for(int i = 0; i < 8001; i++){
        if(mode_cnt == cnt[i]){
            if(temp < 2){
                mode = i - 4000;
            }
            else break;
            temp++;
        }
    }

    cout << mean << endl;
    cout << arr[n / 2] << endl;
    cout << mode << endl;
    cout << arr[n - 1] - arr[0] << endl;
    
    delete[] arr;
    delete[] cnt;
    return 0;
}