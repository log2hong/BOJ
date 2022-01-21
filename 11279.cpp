#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    priority_queue<int> Q;
    
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x != 0) Q.push(x);
        else{
            if(Q.empty()) cout << "0" << '\n';
            else{
                cout << Q.top() << '\n';
                Q.pop();
            }
        }
    }
    return 0;
}