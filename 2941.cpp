#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> croatianAlphabet = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    string s;
    cin >> s;
    for(int i = 0; i < croatianAlphabet.size(); i++){
        while(1){
            int idx = s.find(croatianAlphabet[i]);
            if(idx == string::npos) break;
            s.replace(idx, croatianAlphabet[i].length(), "0");
        }
    }
    
    cout << s.size() << endl;
    return 0;
}