#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;

void solve()
{
    ll n,Max=0,x=0;
    cin>>n;
    vector<ll> A(n),B(n);
    for(auto &x: A) cin>>x;
    for(auto &x: B) cin>>x;
    if(A[n-1]>B[0]){
        cout<<Max;
        return;
    }
    for(int i=0;i<n;i++){
        ll l=0,r=n-1,mid,index=0;
        if(B[i]>=A[i]){
           while(r>=l){
                mid = (l+r)/2;
                if(B[mid]>=A[i]){
                    index=mid;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
           }
        }
        Max= max(index-i,Max);
    }
    cout<<Max;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve(),cout<<"\n";
return 0;
}
