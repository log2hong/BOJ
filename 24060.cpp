#include <iostream>
using namespace std;

int cnt = 0;

void merge(int* arr, int p, int q, int r, int k){
    int* tmp = new int[r + 2];

    int i = p, j = q + 1, t = 1;
    while(i <= q && j <= r){
        if(arr[i] <= arr[j])
            tmp[t++] = arr[i++];
        else
            tmp[t++] = arr[j++];
    }
    while(i <= q)
        tmp[t++] = arr[i++];
    while(j <= r)
        tmp[t++] = arr[j++];

    i = p, t = 1;
    while(i <= r){
        arr[i++] = tmp[t++];
        if(++cnt == k)
            cout << tmp[t - 1] << endl;
    }

    delete[] tmp;
}

void merge_sort(int* arr, int start, int end, int k){
    int p = start, r = end, q;
    if(p < r){
        q = (p + r) / 2;
        merge_sort(arr, p, q, k);
        merge_sort(arr, q + 1, r, k);
        merge(arr, p, q, r, k);
    }
}

int main(){
    int n, k;
    cin >> n >> k;

    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    merge_sort(arr, 0, n - 1, k);

    if(cnt < k)
        cout << -1 << endl;

    delete[] arr;
    return 0;
}