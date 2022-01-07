#include <iostream>
using namespace std;

int chr[26];
int main(){
    int n;
    cin >> n;

    string str;
    while(n--){
        cin >> str;
        chr[str[0] - 'a']++;
    }

    bool flag = true;
    for(int i = 0; i < 26; i++){
        if(chr[i] >= 5){
            flag = false;
            cout << static_cast<char>('a' + i);
        }
    }
    if(flag) cout << "PREDAJA" << endl;
    return 0;
}