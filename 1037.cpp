#include <iostream>
using namespace std;

int main(){
    int cnt;
    cin >> cnt;

    int max_in = 1, min_in = 1000000;
    while(cnt--){
        int t;
        cin >> t;
        if(max_in < t) max_in = t;
        if(min_in > t) min_in = t;
    }

    cout << max_in * min_in << endl;
    return 0;
}