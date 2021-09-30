#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int64_t n,res=0,s=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+= a[i];
    }
    if(s%n!=0){
        cout<<-1<<"\n";
        return;
    }
    s/=n;
    for(int i=0;i<n;i++){
        if(a[i]>s) res++;
    }
    cout<<res<<"\n";

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
