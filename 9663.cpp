#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, ans;
vector<pair<int, int> > queen; 

bool isAvailable(int row, int col){
	for(pair<int, int> q : queen){
		if(row == q.first || col == q.second || abs(row - q.first) == abs(col - q.second))
			return false;
	}
	return true;
}

void dfs(int row){
	if(row == n){
		ans++;
		return;
	}
	for(int j = 1; j <= n; j++){
		if(isAvailable(row + 1, j)){
			queen.push_back({row + 1, j});
			dfs(row + 1);
			queen.erase(queen.end() - 1);
		}
	}
}

int main(){
	cin >> n;
	dfs(0);

	cout << ans << endl;
	return 0;
}