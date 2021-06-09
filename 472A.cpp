
#include <bits/stdc++.h>

using namespace std;
 set<int> st;

int snt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return 1;
    }
    return 0;
}

void pushmap(){
    st.insert(1);
    st.insert(2);
    for(int i=3;i<=1000000;i++){
        if(snt(i)==0) st.insert(i);
    }
}
void solve(){
    int n;
    cin>>n;

    for(int i=n-1;i>=n/2;i--){
        if(st.count(i)==0 && st.count(n-i)==0 ){
                cout<<i<<" "<<n-i;
                return;
        }
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    pushmap();
    solve();
return 0;
}
