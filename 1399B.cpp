#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long xmin,ymin,n,res=0;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &x: a){
        cin>>x.first;
    }
    for(auto &y : a){
        cin>>y.second;
    }
    sort(a.begin(),a.end());
    xmin = a[0].first;
    ymin= a[0].second;
    for(int i=1;i<n;i++){
        if(ymin > a[i].second){
            ymin = a[i].second;
        }
    }

    int x,y;
    for(int i=0;i<n;i++){
       x= a[i].first - xmin;
       y= a[i].second - ymin;
       res += x>y? x:y;
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
