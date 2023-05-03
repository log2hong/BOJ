#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool compare(pair<int, string>a, pair<int, string>b) {
	if (a.first == b.first) {
		if (a.second.length() == b.second.length())
			return a.second < b.second; 
		else return a.second.length() > b.second.length();
	}
	else return a.first > b.first;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	map<string, int> Map;
	
    int n, m;
    cin >> n >> m;

	while (n--) {
		string str;
        cin >> str;
		if(str.length() < m) continue;
		Map[str]++;
	}

	vector<pair<int, string> > v;
	for(auto it : Map)
        v.push_back(make_pair(it.second, it.first));
        
	sort(v.begin(), v.end(), compare);

	for(auto it : v)
        cout << it.second << '\n';

    return 0;
}
