#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    map<string,int> name_to_num;
    vector<string> num_to_name(100001);
    
    for(int i = 1; i <= n; i++){
        string str;
        cin >> str;
        name_to_num[str] = i;
        num_to_name[i] = str;
    }

    while(m--){
        string str;
        cin >> str;
        if('1' <= str[0] && str[0] <= '9') cout << num_to_name[stoi(str)] << '\n';
        else cout << name_to_num[str] << '\n';
    }

    return 0;
}