#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,minx=9999999;
    cin>>n;
    vector<int> a(n);
    for(auto &x :a) cin>>x;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        minx=min(minx,a[i+1]-a[i]);
    }
    cout<<minx<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
            solve();
    }

return 0;
}
