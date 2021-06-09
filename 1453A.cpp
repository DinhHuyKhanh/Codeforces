
#include <bits/stdc++.h>

using namespace std;
 void solve(){
     int n,m,x,res=0;
    vector<int> vt;
    set<int> st;
     cin>>n>>m;
     for(int i=0;i<n;i++){
        cin>>x;
        vt.push_back(x);
     }
     for(int i=0;i<m;i++){
        cin>>x;
        st.insert(x);
     }
     res=0;
     for(int i=0;i<vt.size();i++){
        if(st.find(vt[i]) != st.end()){
            res++;
        }
     }
     cout<<res<<endl;
 }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

return 0;
}
