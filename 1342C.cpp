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
    vector<int> a;
    int n=s.size(),cur=1,maxx=0;
    for(int i=0;i<n;i++){
        cur+= (s[i]=='L')? 1: 0;
        if(s[i]=='R'){
            maxx = (maxx>cur)? maxx: cur;
            cur=1;
        }
    }
    maxx = (maxx>cur)? maxx: cur;
    cout<<maxx<<"\n";
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
