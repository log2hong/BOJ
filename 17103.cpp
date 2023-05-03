#include <iostream>
#include <cmath>
using namespace std;

const int MAX_N = 1000000;

bool isPrime[MAX_N + 1];

void make_prime(){
    for(int i = 2; i < MAX_N; i++){
        isPrime[i] = true;
    }
    
    for(int i = 2; i < sqrt(MAX_N); i++){
        if(isPrime[i] == false) continue;
        int j = i * 2;
        while(j <= MAX_N){
            isPrime[j] = false;
            j += i;
        }
    }
}

int goldbach(int n){
    int cnt = 0;
    for(int j = 2; j <= n / 2; j++)
        if(isPrime[j] && isPrime[n - j])
            cnt++;
    return cnt;
}

int main(){
    make_prime();
    
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        cout << goldbach(n) << endl;
    }

    return 0;
}