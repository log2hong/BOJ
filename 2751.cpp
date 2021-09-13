#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000000;

int N;
int arr[MAX];
int tempArr[MAX];

void merge(int l, int m, int r){
    int i = l, j = m + 1, k = l;
    while(i <= m && j <= r){
        if(arr[i] < arr[j]) tempArr[k] = arr[i++];
        else tempArr[k] = arr[j++];
        k++;
    }

    if (i > m)
        for(int idx = j; idx <= r; idx++) tempArr[k++] = arr[idx];
    else
        for(int idx = i; idx <= m; idx++) tempArr[k++] = arr[idx];
    for(int idx = l; idx <= r; idx++) arr[idx] = tempArr[idx];
}

void mergeSort(int l, int r){
    if(r > l){
        int m = (l + r) / 2;
        mergeSort(l, m);
        mergeSort(m + 1, r);
        merge(l, m, r);
    }
}

int main(){
    scanf("%d", &N);

    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    mergeSort(0, N - 1);
    for(int i = 0; i < N; i++) printf("%d\n", arr[i]);

    return 0;
}