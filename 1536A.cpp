#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(auto &x : a){
        cin>>x;
        mp[x]++;
    }
    ll x;
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            x=abs(a[i]-a[j]);
            if(mp.find(x) == mp.end()){
                mp[x]++;
                a.push_back(x);
                i=0;
            }
            if(a.size()>300){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
    cout<<a.size()<<"\n";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();

return 0;
}
