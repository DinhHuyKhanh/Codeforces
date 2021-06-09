#include <bits/stdc++.h>

using namespace std;
long long  a,b,c;
vector<long long> vt(4);

void solve(){
    cin>>vt[0]>>vt[1]>>vt[2]>>vt[3];
    sort(vt.begin(),vt.end());
    a = vt[3]-vt[2];
    b= vt[0]-a;
    c= vt[1]-a;

cout<<a<<" "<<b<<" "<<c;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();


return 0;
}
