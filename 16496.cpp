#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), compare);

    string ans;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i];
    }

    if (v[0] == "0") cout << "0" << endl;
    else cout << ans << endl;
}