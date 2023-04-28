#include <iostream>
#include <deque>
#include <string>
using namespace std;

void str_to_arr(string& s, deque<int>& dq){
    for(int i = 1; i < s.size(); i++){
        string n = "";
        while(s[i] != ',' && s[i] != ']') n += s[i++];
        if(n != "") dq.push_back(stoi(n));
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        string p, str;
        int n;
        deque<int> dq;
        cin >> p >> n >> str;
        str_to_arr(str, dq);

        int cnt = 0;
        bool flag = false;
        for(int i = 0; i < p.size(); i++){
            if(p[i] == 'R') cnt++;
            else{
                if(dq.size() == 0){
                    flag = true;
                    cout << "error\n";
                    break;
                }
                if(cnt % 2 == 0) dq.pop_front();
                else dq.pop_back();
            }
        }

        if(!flag){
            cout << "[";
            while(dq.size()){
                if(cnt % 2 == 0){
                    cout << dq.front();
                    dq.pop_front();
                }
                else{
                    cout << dq.back();
                    dq.pop_back();
                }
                if(dq.size() != 0) cout << ",";
            }
            cout << "]" << '\n';
        }
    }

    return 0;
}