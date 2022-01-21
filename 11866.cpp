#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    queue<int> Q;

    for(int i = 1; i <= n; i++) Q.push(i);

    cout << "<";
    while(!Q.empty()){
        for(int i = 0; i < k - 1; i++){
            int temp;
            temp = Q.front();
            Q.pop();
            Q.push(temp);
        }
        cout << Q.front();
        Q.pop();
        if(Q.empty()) cout << ">" << endl;
        else cout << ", ";
    }
    return 0;
}