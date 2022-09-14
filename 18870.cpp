#include <iostream>
#include <algorithm>
using namespace std;

struct dataset{
    int idx;
    int num;
    int compressed;
};

bool compare_num(const dataset &a, const dataset &b){
    return a.num < b.num;
}

bool compare_idx(const dataset &a, const dataset &b){
    return a.idx < b.idx;
}

int main(){
    int N;
    cin >> N;

    dataset* arr = new dataset[N];
    for(int i = 0; i < N; i++){
        arr[i].idx = i;
        cin >> arr[i].num;
    }

    sort(arr, arr + N, compare_num);

    int tmp = 0;
    for(int i = 1; i < N; i++){
        if(arr[i].num != arr[i - 1].num) tmp++;
        arr[i].compressed = tmp;
    }

    sort(arr, arr + N, compare_idx);

    for(int i = 0; i < N; i++){
        cout << arr[i].compressed << " ";
    }
    return 0;
}