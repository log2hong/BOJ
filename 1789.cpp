#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    
    unsigned int sum = 0, i = 1;
    while(true){
        sum += i;
        if(sum > n) break;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}