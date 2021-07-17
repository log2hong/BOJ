#include <iostream>
using namespace std;

int generator(int n){
    return n + n % 10 + (n / 10) % 10 + (n / 100) % 10 + (n / 1000) % 10 + (n / 10000) % 10;
}

int main(){
    int arr[10001] = {0, };
    for(int i = 1; i <= 10000; i++){
        if(generator(i) <= 10000){
            arr[generator(i)] = 1;
        }
    }
    for(int i = 1; i <= 10000; i++){
        if(arr[i] == 0) cout << i << endl;
    }
    return 0;
}
