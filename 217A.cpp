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
const bool Ntest=0;

void solve()
{
    int n;
    cin>>n;
    map<int,int> north, east;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        north[x]++;
        east[y]++;
    }
    if(sz(east)+sz(north) < 2*n)
    {
        cout<<0<<"\n";
    }else{
        cout<<1<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(Ntest){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }else{
        solve();
    }
return 0;
}
