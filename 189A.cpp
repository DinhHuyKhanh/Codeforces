
#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> vt, a(3);
 void solve(){
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());

    for(int i=0;i<=n/a[0];i++){
        for(int j=0;j<=n/a[1];j++){
            int s = n - a[0]*i - a[1]*j;

            if(s==0) vt.push_back(i+j);
            if(s%a[2] == 0 && s>0)
                vt.push_back(i+j+ s/a[2]);
        }
    }

    sort(vt.begin(),vt.end());
        cout<<vt[vt.size()-1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
