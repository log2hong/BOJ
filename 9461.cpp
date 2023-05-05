#include <iostream>
using namespace std;

const int MAX_N = 100;
long long arr[MAX_N + 1];

long long func(int n){
    if(!arr[n]){
        switch(n){
            case 1:
                arr[n] = 1;
                break;
            case 2:
                arr[n] = 1;
                break;
            case 3:
                arr[n] = 1;
                break;
            case 4:
                arr[n] = 2;
                break;
            case 5:
                arr[n] = 2;
                break;
            default:
                arr[n] = func(n - 1) + func(n - 5);
                break;
        }
    }
    return arr[n];
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        cout << func(n) << endl;
    }
    return 0;
}