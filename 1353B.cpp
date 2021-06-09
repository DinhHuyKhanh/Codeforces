
#include <bits/stdc++.h>

using namespace std;
int t,n,k;
void solve(){
    int res=0;
    cin>>n>>k;
    vector<int> a(n),b(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int j=b.size()-1;
    int dem=0;
    for(int i=a.size()-1;i>=0;i--){
        if(b[j]>a[i] && j>=n-k){

            res+=b[j];
            j--;
            i++;
            dem++;
        }else {
            res+=a[i];
            dem++;
        }
        if(dem==n)
        {
            cout<<res<<endl;
            return;
        }
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        solve();
    }


return 0;
}
