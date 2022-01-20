#include <iostream>
#include <memory.h>
using namespace std;

const int MAXSIZE = 1000001;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
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
    
    int m, n;
    cin >> m >> n;
    for(int i = m; i <= n; i++){
        if(isprime[i]){
            cout << i << '\n';
        }
    }
    
    delete[] isprime;
    return 0;
}
