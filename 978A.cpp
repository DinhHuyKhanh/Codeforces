#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b;
    map<int,int> mp;
    for(auto &x: a) cin>>x;
    for(int i=n-1;i>=0;i--){
        if(mp.find(a[i])==mp.end()){
            b.push_back(a[i]);
            mp[a[i]]++;
        }
    }
    cout<<b.size()<<"\n";
    for(int i=b.size()-1;i>=0;i--){
        cout<<b[i]<<" ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
