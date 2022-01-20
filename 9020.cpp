#include <iostream>
#include <memory.h>
using namespace std;

const int MAXSIZE = 10001;

int main(){
    bool* isprime = new bool[MAXSIZE]();
    memset(isprime, true, MAXSIZE * sizeof(bool));

    isprime[0] = isprime[1] = false;
    for(int i = 2; i < MAXSIZE; i++){
        if(isprime[i]){
            for(int j = i * 2; j < MAXSIZE; j += i){
                isprime[j] = false;
            }
        }
    }
    
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        for(int i = m / 2; i >= 2; i--){
            if(isprime[i] && isprime[m - i]){
                cout << i << " " << m - i << endl;
                break;
            }
        }
    }
        
    delete[] isprime;
    return 0;
}
