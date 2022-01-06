#include <iostream>
#include <math.h>
using namespace std;

string str[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    long long int ans;
    for(int i = 0; i < 10; i++){
        if(a == str[i]){
            ans = i * 10;
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        if(b == str[i]){
            ans += i;
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        if(c == str[i]){
            while(i--) ans *= 10;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}