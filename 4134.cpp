#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        long long n;
        cin >> n;

        if(n == 0 || n == 1 || n == 2)
            cout << 2 << endl;
        else if(n == 3)
            cout << 3 << endl;
        else{
            while(!isPrime(n)) n++;
            cout << n << endl;
        }
    }
    return 0;
}