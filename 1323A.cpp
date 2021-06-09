#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,x;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int d1=0,d2=0;
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            cout<<"1\n"<<i<<"\n";
            return;
        }else{
            d2++;
            if(d2==2){
                cout<<"2\n";
                cout<<d1<<" "<<i<<"\n";
                return;
            }
            d1=i;
        }
    }
    cout<<"-1\n";

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
