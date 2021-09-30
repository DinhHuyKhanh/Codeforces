#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,x,res=0;
    cin>>n;
    vector<int> a(n),b;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto &x:mp)
        {
            if(x.second==1) res=x.first;
        }
    for(int i=0;i<n;i++)
    {
        if(a[i]==res){
            cout<<i+1<<"\n";
        }
    }

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
