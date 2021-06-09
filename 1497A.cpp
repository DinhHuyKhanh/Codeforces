
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,x;
    vector<int> vt;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        vt.push_back(x);
    }
    sort(vt.begin(),vt.end());
    for(int i=0;i<n;i++){
        if(i==0 || vt[i]!= vt[i-1]){
            a.push_back(vt[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(i>0 && vt[i]==vt[i-1]){
            a.push_back(vt[i]);
        }
    }
    for( auto x: a){
        cout<<x<<" ";
    }
    cout<<"\n";
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
