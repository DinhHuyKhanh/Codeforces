
#include <bits/stdc++.h>

using namespace std;
int n,t,x;
void solve(){
    long res=0;
    cin>>n;
    vector<int> a(n+1), b(n+1),time(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=1;i<=n;i++){
            cin>>time[i];
    }
    for(int i=1;i<=n;i++)
   {
       res += (res +time[i-1] + (b[i-1]+1-a[i-1])/2 <= b[i-1])?(b[i-1]-a[i-1] - time[i-1]):((b[i-1]+1-a[i-1])/2);
       res += (a[i]-b[i-1] + time[i]);
   }
   cout<<res<<endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--) solve();

return 0;
}
