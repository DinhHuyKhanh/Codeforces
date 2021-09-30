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
    int n,x;
    cin>>n;
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++){
       cin>>a[i];
    }
    sort(all(a));
    for(int i=0;i<n;i++){

            cout<<a[i]<<" "<<a[n+i]<<" ";

    }
    cout<<endl;
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
