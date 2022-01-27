#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int m;
        cin >> m;
        map<string, int> wears;
        for(int i = 0; i < m; i++){
            string name, kind;
            cin >> name >> kind;
            wears[kind]++;
        }

        int ans = 1;
        for(auto p = wears.begin(); p != wears.end(); p++)
            ans *= p->second + 1;
        cout << ans - 1 << endl;
    }
}