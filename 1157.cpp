#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int *arr = new int[26]{};
    for(int i = 0; i < s.size(); i++){
        arr[tolower(s[i]) - 'a']++;
    }

    int maxidx = -1;
    int maxcnt = -1;
    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(maxcnt < arr[i]){
            maxcnt = arr[i];
            maxidx = i;
            cnt = 0;
        }
        else if(maxcnt == arr[i]) cnt++;
    }
    if(cnt > 0) cout << "?" << endl;
    else cout << (char)(maxidx + 'A');

    delete[] arr;
    return 0;
}