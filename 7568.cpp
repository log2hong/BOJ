#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    pair<int, int> *arr = new pair<int, int>[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    for(int i = 0; i < n; i++){
        int rank = 1;
        for(int j = 0; j < n; j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second) rank++;
        }
        cout << rank << " ";
    }
    
    delete[] arr;
    return 0;
}
