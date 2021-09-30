#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(auto &i: a) cin>>i;
    for(auto &i : b) cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0,j=0, res=1e9+7;
    while(i<n && j<n){
        res = min(res, abs(a[i]-b[j]));
        if(a[i] < b[j]){
            ++i;
        }else{
            ++j;
        }
    }
    cout<<res;
}
int main(){
    solve();
return 0;
}