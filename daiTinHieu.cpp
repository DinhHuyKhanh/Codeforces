#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n),res(n);
    for(auto &x:a){
        cin>>x;
    }
    stack<int> st;
    st.push(0);
    res[0]=1;
    for(int i=1;i<n;i++){
        while(!st.empty() && a[st.top()] <= a[i]) st.pop();
        res[i]= st.empty()? i+1: i-st.top();
        st.push(i);
    }
    for(auto x: res) cout<<x<<" ";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }

return 0;
}
