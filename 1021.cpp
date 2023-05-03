#include <iostream>
#include <deque>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	deque<int> dq;
	for(int i = 1; i <= n; i++){
		dq.push_back(i);
	}

	int l, r;
	int cnt = 0;
	while(m--){
		int x;
		cin >> x;
		
		for(int i = 0; i < dq.size(); i++){
			if(dq[i] == x){
				l = i;
				r = dq.size()-i;
				break;
			}
		}
		
		if(l <= r){
			while(true){
				if(dq.front() == x)
					break;
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
			dq.pop_front();
		}
		else{
			cnt++;
			while(true){
				if(dq.back() == x)
					break;
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
			dq.pop_back();
		}
	}
	
	cout << cnt << endl;
	return 0;
}