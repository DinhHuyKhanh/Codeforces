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
    int n;
    cin>>n;
    vector<vector<char>> a(n);
    char x;
    vector<pair<int,int>> id;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            a[i].pb(x);
            if(x=='*'){
                id.pb({i,j});
            }
        }
    }
    if(id[0].f == id[1].f){
        if(id[0].f==0){
            a[1][id[0].s] = '*';
            a[1][id[1].s]='*';
        }else{
            a[0][id[0].s] = '*';
            a[0][id[1].s]='*';
        }
    }else if(id[0].s == id[1].s){
        if(id[0].s ==0){
            a[id[0].f][1]='*';
            a[id[1].f][1]='*';
        }else{
            a[id[0].f][0]='*';
            a[id[1].f][0]='*';
        }
    }else{
        a[id[0].f][id[1].s]='*';
        a[id[1].f][id[0].s]='*';
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
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
