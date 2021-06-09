
#include <bits/stdc++.h>

using namespace std;
int n;
void solve(){
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                a[i][j]=1;
            }
            if(j==0){
                a[i][j]=1;
            }
            if(i!=0 && j!=0){
                a[i][j]=a[i-1][j] + a[i][j-1];
            }

        }
    }
    cout<<a[n-1][n-1];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
