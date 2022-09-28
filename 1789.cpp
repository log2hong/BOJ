#include <iostream>
using namespace std;
 
int main() {
    long long S, sum = 0;
    int num = 1, cnt = 0;   
    cin >> S;

    while(true){
        sum += num;
        cnt++;
        if(sum > S){
            cnt--;
            break;
        }
        num++;
    }
    cout << cnt << endl;
    return 0;
}