#include <bits/stdc++.h>

using namespace std;

    int n,m,x,y,minx,dem,res;
void solve()
{
    cin>>n>>m>>x>>y;
    char s[n][m];
    dem=0;
    res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            if(s[i][j]=='.') dem++;
        }
    }
        if(y>=2*x){
            cout<<dem*x<<"\n";
            return;
        }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(j==m-1 && s[i][j]=='.'){
                res+=x;
            }else if(s[i][j]=='.'){
                if(s[i][j+1]=='.'){
                    res+=y;
                    j++;
                }else{
                    res+=x;
                }
            }
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();

return 0;
}
