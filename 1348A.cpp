
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n,res=0,sol=0;
    cin>>n;
    vector<int> vt(n+1);
    for(int i=1;i<=n;i++){
        vt[i] = pow(2,i);
    }
    if(n==2){
        cout<<abs(vt[1]-vt[2])<<endl;
        return;
    }else{
        for(int i=1;i<n;i++){
            if(i<n/2) res+=vt[i];
            else sol +=vt[i];
        }
        res+=vt[n];
        cout<<abs(res-sol)<<endl;
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
