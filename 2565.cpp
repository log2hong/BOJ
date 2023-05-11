#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int> > v(n);
    int* lis = new int[n];

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    int idx = 0;
    for(int i = 0; i < n; i++){
        if(idx == 0){
            lis[idx] = v[i].second;
            idx++;
        }
        else{
            if(lis[idx - 1] < v[i].second){
                lis[idx] = v[i].second;
                idx++;
            }
            else{
                lis[lower_bound(lis, lis + idx, v[i].second) - lis] = v[i].second;
            }
        }    
    }

    cout << n - idx << endl;

    delete[] lis;
    return 0;
}