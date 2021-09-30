#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,x,s=0,am=0,duong=0,non=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            s++;
            non++;
        }else if(x<0){
            s+= -1 - x;
            am++;
        }else{
            s+= x-1;
        }
    }

    if(am&1 && non == 0){
        s += 2;
    }
    cout<<s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
