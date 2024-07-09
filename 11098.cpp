#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        priority_queue<pair<int, string> > pq;
        
        int p;
        cin >> p;
        
        while(p--){
            int c;
            string name;

            cin >> c >> name;
            pq.push(make_pair(c, name));
        }
        cout << pq.top().second << endl;
    }
    return 0;
}