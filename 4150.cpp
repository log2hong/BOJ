#include <iostream>
#include <algorithm>
using namespace std;

string d[10001] = {"0", "1"};

string sum(string a, string b){
    string ans;
    int sum = 0;
    while(!a.empty() || !b.empty() || sum){
        if(!a.empty()) sum += a.back() - '0', a.pop_back();
        if(!b.empty()) sum += b.back() - '0', b.pop_back();
        ans.push_back((sum % 10) + '0');
        sum /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string Fibonacci(int n){
    if(n == 0) return "0";
    if(n == 1) return "1";
    if(d[n] != "\0") return d[n];
    d[n] = sum(Fibonacci(n - 1), Fibonacci(n - 2));
    return d[n];
}


int main(){
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}