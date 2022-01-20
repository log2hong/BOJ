#include <iostream>
#include <memory.h>
using namespace std;

const int MAXSIZE = 10001;

int main(){
    bool* isprime = new bool[MAXSIZE]();
    memset(isprime, true, MAXSIZE*sizeof(bool));

    isprime[0] = isprime[1] = false;
    for(int i = 2; i < MAXSIZE; i++){
        if(isprime[i]){
            for(int j = i * 2; j < MAXSIZE; j += i){
                isprime[j] = false;
            }
        }
    }
    
    int m, n, ans = 0, minprime = 0;
    cin >> m >> n;
    for(int i = m; i <= n; i++){
        if(isprime[i]){
            ans += i;
            if(minprime == 0) minprime = i;
        }
    }
    if(ans == 0) cout << "-1" << endl;
    else cout << ans << endl << minprime << endl;
    
    delete[] isprime;
    return 0;
}
