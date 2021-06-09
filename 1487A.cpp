/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> vt(n+1);
    for(int i=1;i<=n;i++){
        cin>>vt[i];
    }
    sort(vt.begin(),vt.end());
    int dem=1;
    for(int i=2;i<=n;i++){
        if(vt[i]>vt[1]) break;
        dem++;
    }
    cout<<n-dem<<endl;
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
