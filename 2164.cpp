#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> Q;

    for(int i = 1; i <= n; i++) Q.push(i);

    int temp;
    while(true){
        temp = Q.front();
        Q.pop();
        if(Q.empty()){
            cout << temp << endl;
            break;
        }
        temp = Q.front();
        Q.pop();
        Q.push(temp);
    }
    return 0;
}