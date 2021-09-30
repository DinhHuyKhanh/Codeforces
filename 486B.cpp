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
    int n,m;
    cin>>n>>m;
    int a[n][m], b[n][m];
    map<int,int> row,col, res,ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                row[i]++;
                col[j]++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]!=0 || col[j]!=0) b[i][j]=0;
            if(b[i][j]==1) res[i]++, ans[j]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]== 1 && (res[i] == 0 && ans[j]==0)){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
