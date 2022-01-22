#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, par[3001], cnt[3001];
vector<pair<pair<int, int>, pair<int, int> > > point;

int find(int x){
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
}

void merge(int x, int y){
    par[find(x)] = find(y);
}

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c){
    int temp1 = (b.second - a.second) * (c.first - a.first) + a.second * (b.first - a.first);
    int temp2 = (b.first - a.first) * c.second;
    if(temp1 < temp2) return 1;
    else if(temp1 > temp2) return -1;
    else return 0;
}

int intersect(pair<int, int> p11, pair<int, int> p12, pair<int, int> p21, pair<int, int> p22){
    int l1 = ccw(p11, p12, p21) * ccw(p11, p12, p22);
    int l2 = ccw(p21, p22, p11) * ccw(p21, p22, p12);
    if (l1 == 0 && l2 == 0){
        if(p11 > p12) swap(p11, p12);
        if(p21 > p22) swap(p21, p22);
        return p21 <= p12 && p11 <= p22;
    }
    return l1 <= 0 && l2 <= 0;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) par[i] = i;

    int z = n;
    int j = 0;
    while(n--){
        pair<int, int> p11, p12;
        cin >> p11.first >> p11.second >> p12.first >> p12.second;
        point.push_back(make_pair(p11, p12));

        for(int i = 0; i < j; i++){
            if(intersect(p11, p12, point[i].first, point[i].second)) merge(i, j);
        }
        j++;
    }

    int ans1 = 0;
    for(int i = 0; i < j; i++){
        if(cnt[find(i)]++ == 0) ans1++;
    }

    int ans2 = -1;
    for(int i = 0; i < j; i++) ans2 = max(ans2, cnt[i]);

    cout << ans1 << endl << ans2 << endl;
    return 0;
}
