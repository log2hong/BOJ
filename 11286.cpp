#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class compare{
public:
    bool operator()(int a, int b){
        if(abs(a) > abs(b)) return true;
        else if(abs(a) < abs(b)) return false;
        else return a > b;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    priority_queue<int, vector<int>, compare> Q;
    
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