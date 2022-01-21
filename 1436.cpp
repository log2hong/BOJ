#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 666; cnt != n; i++){
        int no = i;
        while(no){
            if(no % 1000 == 666){
                cnt++;
                break;
            }
            no /= 10;
        }
        if(cnt == n){
            cout << i << endl;
            break;
        }
    }
    return 0;
}