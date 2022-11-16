#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(string a, string b) {
    if (a.length() != b.length())
        return a.length() > b.length();
    else
        return a > b;
}

bool compare2(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n, k;
    cin >> k >> n;
    string s;

    vector<string> v;
    for (int i = 0; i < k; i++) {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), compare);

    vector<string> ans;
    for (int i = k; i < n; i++) {
        ans.push_back(v.front());
    }
    for (auto i : v) {
        ans.push_back(i);
    }
    sort(ans.begin(), ans.end(), compare2);
    for (auto i : ans) {
        cout << i;
    }
    cout << endl;
    return 0;
}
