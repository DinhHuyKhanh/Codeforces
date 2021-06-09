
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> vt1,vt2,vt3;
    int so1=0,so2=0,so3=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){
            vt1.push_back(i);
        }
        else if(a[i]==2){
            vt2.push_back(i);
        }else{
            vt3.push_back(i);
        }
    }

    int j = min(vt1.size(),min(vt2.size(),vt3.size()));

    cout<<j<<endl;
    for(int i=0;i<j;i++){
        cout<<vt1[i]<<" "<<vt2[i]<<" "<<vt3[i]<<endl;
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
