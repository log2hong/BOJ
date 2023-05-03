#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, ans = 0;
        queue<pair<int, int> > q;
        priority_queue<int> pq;

        cin >> n >> m;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            q.push({i, x});
            pq.push(x);
        }
 
        while(!q.empty()){
            pair<int, int> curr = q.front();
            q.pop();

            if(pq.top() == curr.second){
                pq.pop();
                ans++;
                
                if(curr.first == m){
                    cout << ans << endl;
                    break;
                }
            }
            else{
                q.push(curr);
            }
        }
    }
    return 0;
}