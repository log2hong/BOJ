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

    for(int i = 0; i < n; i++){
        string name, query;
        cin >> name >> query;
        if(query == "enter"){
            s.insert(name);
        }
        else{
            s.erase(name);
        }
    }
    auto iter = s.end();
    while(true){
        iter--;
        cout << *iter << endl;
        if(iter == s.begin()) break;
    }
    return 0;
}