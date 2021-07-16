#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int tmp = n, cnt = 0;
    do{
        tmp = (tmp % 10) * 10 + (tmp / 10 + tmp % 10) % 10;
        cnt++;
    }while(n != tmp);
    cout << cnt;
    return 0;
}
