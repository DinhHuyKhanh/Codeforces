#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(char a[50][50], int n,int m){
   for(int i=0;i<n;i++){
    for(int j=1;j<m;j++){
        if(a[i][j]!='.'){
            if(a[i][j]==a[i][j-1]) {
                    return 0;
            }
        }
    }
   }

   for(int i=1;i<n;i++){
    for(int j=0;j<m;j++)
    if(a[i][j]!='.'){
        if(a[i-1][j]==a[i][j]) {
                return 0;
        }
    }
   }

    return 1;
}

int thaydoi1 (char a[50][50], int n ,int m){
    if(a[0][0]=='.') a[0][0]='R';
    for(int j=1;j<m;j++){
        if(a[0][j]=='.'){
            if(a[0][j-1]=='R'){
                a[0][j]='W';
            }else{
                a[0][j]='R';
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                if(a[i-1][j]=='R'){
                    a[i][j]='W';
                }else{
                    a[i][j]='R';
                }
            }
        }
    }
     if(check(a,n,m)==1)
    {
         cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        return 1;
    }
    return 0;
}

int thaydoi2(char a[50][50], int n,int m) {
    if(a[0][0]=='.') a[0][0]='W';
    for(int j=1;j<m;j++){
        if(a[0][j]=='.'){
            if(a[0][j-1]=='R'){
                a[0][j]='W';
            }else{
                a[0][j]='R';
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                if(a[i-1][j]=='R'){
                    a[i][j]='W';
                }else{
                    a[i][j]='R';
                }
            }
        }
    }
    if(check(a,n,m)==0)
    {
        cout<<"NO\n";
        return 0;
    }
    else{
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        return 1;
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    char a[50][50] ,b[50][50];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    if(thaydoi1(a,n,m)==0){
        thaydoi2(b,n,m);
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
