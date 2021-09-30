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
    int a[100][100]={0,0};

    for(int j=0;j<m;j++){
        if(j%2==0) a[0][j]=1;
    }
    for(int i=0;i<n;i++){
        if(i%2==0) a[i][0]=1;
    }
    for(int i=2;i<n;i++){
        if(i%2==0) a[i][m-1]=1;
    }
    for(int j=2;j<m-2;j++){
        if(j%2==0) a[n-1][j]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
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
