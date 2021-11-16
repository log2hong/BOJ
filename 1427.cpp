#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(char a, char b){
    return a > b;
}

int main(){
    int n;
    string str;

    cin >> n;
    str = to_string(n);

    sort(str.begin(), str.end(), compare);
    cout << str;

    return 0;
}