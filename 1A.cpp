#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,a;
    cin>>n>>m>>a;
    int64_t dem1,dem2;
    dem1= (n-1)/a +1;
    dem2 = (m-1)/a +1;
    cout<<dem1*dem2;
return 0;
}
