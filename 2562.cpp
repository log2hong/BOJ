#include <iostream>
using namespace std;

int main(){
    int max = 0, idx, tmp;
    for(int i = 1; i <= 9; i++){
        cin >> tmp;
        if(max < tmp){
            max = tmp;
            idx = i;
        }
    }
    cout << max << endl << idx << endl;
    return 0;
}
