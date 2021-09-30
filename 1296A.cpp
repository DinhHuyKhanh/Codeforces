#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,res=0,stt=0,stt2=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        res+=x;
        if(x&1){
            stt=1;
        }else{
            stt2=1;
        }
    }
    if(res&1){
        cout<<"YES\n";
    }else{
        if(stt==stt2 && stt==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
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
