#include <bits/stdc++.h>

using namespace std;
int phantich(int x){
    int res=0;
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            res++;
            x/=i;
        }
    }
    if(x!=1){
        res++;
    }
    return res;
}

void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(k==1)
    {
        if((a%b==0 || b%a==0) && a!=b){
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
    }else{
        int x = phantich(a);
        int y = phantich(b);
        string res;
        res= (x+y >=k)? "YES\n":"NO\n";
        cout<<res;
    }
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
