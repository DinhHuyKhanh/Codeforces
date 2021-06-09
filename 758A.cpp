
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    int64_t s=0;
    cin>>n;
    vector<int> vt(n);
    for(int i=0;i<n;i++) cin>>vt[i];
    sort(vt.begin(),vt.end());
    for(int i=0;i<n;i++){
        s+= vt[n-1] - vt[i];
    }
    cout<<s<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
