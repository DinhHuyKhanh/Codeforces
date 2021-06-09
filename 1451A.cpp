#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << (n <= 3? n-1 : 2 + (n&1)) << '\n';
    // cout<<"\n"<<n;
        }
    return 0;
}
