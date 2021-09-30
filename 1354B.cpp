#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
void solve()
{
    string s;
    cin>>s;
    vector<int> a,b,c;
    int n=s.size(),res=10e9,ans=1e9;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            a.pb(i);
        }else if(s[i]=='2'){
            b.pb(i);
        }else c.pb(i);
    }
    if(a.size()==0|| b.size()==0 || c.size()==0){
        cout<<"0\n";
        return;
    }
    n = a.size();
    for(int i=0;i<n;i++)
    {
        int l=0, r=b.size()-1,m,cur=0;
        while(l<=r)
        {
            m=(l+r)/2;
            if(b[m]<=a[i]){
                cur=m;
                l=m+1;
            }else r=m-1;
        }
        int vt1=b[cur],vt2;
        if(cur==b.size()-1){
            vt2=vt1;
        }else vt2=b[cur+1];

        l=0, r=c.size()-1,cur=0;
        while(l<=r)
        {
            m=(l+r)/2;
            if(c[m]<=a[i]){
                cur=m;
                l=m+1;
            }else r=m-1;
        }
        int vt3=c[cur],vt4;
        if(cur==c.size()-1) vt4=vt3;
        else vt4=c[cur+1];
        ans= min(ans,1+min(max(vt2,max(vt4,a[i])) - min(vt2,min(vt4,a[i])),max(vt1,max(vt3,a[i])) - min(vt1,min(vt3,a[i]))));
        ans= min(ans,1+min(max(vt2,max(vt3,a[i])) - min(vt2,min(vt3,a[i])),max(vt1,max(vt4,a[i])) - min(vt1,min(vt4,a[i]))));
        res= min(ans,res);
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
