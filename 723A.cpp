
#include <bits/stdc++.h>

using namespace std;

vector<int> a(3);
void solve(){
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    int sum = a[1]- a[0]  + a[2] - a[1];
    cout<<sum<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   solve();


return 0;
}
