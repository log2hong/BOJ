#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}

int main(){
    int n;
    cin >> n;
    vector<string> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compare);

    string str = "";
    for(int i = 0; i < n; i++){
        if(str == v[i]) continue;
        cout << v[i] << endl;
        str = v[i];
    }
    return 0;
}
