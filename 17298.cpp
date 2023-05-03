#include <iostream>
#include <stack>
using namespace std;

const int MAX_N = 1000000;
int arr[MAX_N + 1], ans[MAX_N + 1];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()] = -1;
        st.pop();
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    
    return 0;
}