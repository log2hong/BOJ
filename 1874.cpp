#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    vector<char> ans;
    stack<int> st;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int idx = 0;
    for(int i = 1; i <= n; i++){
        st.push(i);
        ans.push_back('+');
 
        while(!st.empty() && st.top() == arr[idx]){
            idx++;
            st.pop();
            ans.push_back('-');
        }
    }
    
    if(!st.empty())
        cout << "NO" << "\n";
    else
        for(auto ch: ans)
            cout << ch << "\n";
    
    delete[] arr;
    return 0;
}