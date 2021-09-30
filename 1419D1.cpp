#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    if(n==2){
        cout<<0<<endl;
        cout<<a[0]<<" "<<a[1];
        return;
    }
    sort(a.begin(),a.end());
    if(n&1){
    cout<<n/2<<"\n";
    for(int i=n/2;i<n;i++){
        cout<<a[i]<<" ";
        if(i!=n-1)
        cout<<a[i-n/2]<<" ";
        }
    }else{
        cout<<(n-1)/2<<"\n";
          for(int i=n/2;i<n;i++){
        if(i!=n-1){
        cout<<a[i]<<" ";
        cout<<a[i-n/2]<<" ";
        }else{
            cout<<a[i-n/2]<<" ";
            cout<<a[i]<<" ";
        }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
