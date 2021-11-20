#include <iostream>
#include <stack>
using namespace std;

int main(){
    int k;
    cin >> k;
    
    stack<int> st;
    int temp;
    for(int i = 0; i < k; i++){
        cin >> temp;
        if(temp == 0) st.pop();
        else st.push(temp);
    }
    
    int ans = 0;
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    
    cout << ans << endl;
    return 0;
}
