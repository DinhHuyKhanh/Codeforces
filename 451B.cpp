#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n,l,r=0,stt=0;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
            cin>>a[i];
       if(a[i]<a[i-1] && stt==0){
            l=i-1;
            r=i;
            stt=1;
       }else if (a[i]<a[i-1]){
            r=i;
       }
    }
    if(r==0)
    {
        cout<<"yes\n";
        cout<<1<<" "<<1;
        return;
    }
    reverse(a.begin()+l,a.begin()+r+1);
    for(int i=1;i<=n;i++){
        if(a[i]<=a[i-1]){
            cout<<"no\n";
            return;
        }
    }
    cout<<"yes\n";
    cout<<l<<" "<<r;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
