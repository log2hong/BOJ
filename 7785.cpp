#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> s;
    int n;
    cin >> n;

    string name, query;
    for(int i = 0; i < n; i++){
        cin >> name >> query;
        if(query == "enter"){
            s.insert(name);
        }
        else if(query == "leave"){
            s.erase(name);
        }
    }
    auto iter = s.end();
    while(true){
        iter--;
        cout << *iter << '\n';
        if(iter == s.begin()) break;
    }
    return 0;
}