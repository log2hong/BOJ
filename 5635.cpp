#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    priority_queue<pair<int, string> > pq_max;
    priority_queue<pair<int, string> > pq_min;
    
    int n;
    cin >> n;
    
    while(n--){
        int d, m, y;
        string name;

        cin >> name >> d >> m >> y;
        pq_max.push(make_pair(y * 365 + m * 31 + d, name));
        pq_min.push(make_pair(-(y * 365 + m * 31 + d), name));
    }
    
    cout << pq_max.top().second << endl;
    cout << pq_min.top().second << endl;
    return 0;
}