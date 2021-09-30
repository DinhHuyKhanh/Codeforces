#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=0;

void solve()
{
   int l,r;
   cin>>l>>r;
   for(int i=l;i<=r;i++){
        vector<int> a(10,0);
        int k=i;
        while(k){
            a[k%10]++;
            k/=10;
        }
        bool bad=0;
        for(auto x: a){
            if(x>=2) bad=1;
        }
        if(bad==false){
            cout<<i<<"\n";
            return;
        }
   }
   cout<<-1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
