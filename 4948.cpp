#include <iostream>
#include <memory.h>
using namespace std;

const int MAXSIZE = 246915;

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
    
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;
        int ans = 0;

        for(int i = n + 1; i <= 2 * n; i++) ans += isprime[i];
        cout << ans << endl;
    }
    
    delete[] isprime;
    return 0;
}
