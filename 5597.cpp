#include <iostream>
using namespace std;

bool submitted[31];

int main(){
    int temp;
    for(int i = 0; i < 28; i++){
        cin >> temp;
        submitted[temp] = true;
    }
    for(int i = 1; i <= 30; i++){
        if(!submitted[i]) cout << i << endl;
    }
    return 0;
}
