#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x;
    vector<int> a;
    vector<int> b;
    cin>>n>>m;
    while(m--){
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());

    for(int i=0;i<a.size()-n+1;i++){
        b.push_back(a[i+n-1]-a[i]);
    }
    sort(b.begin(),b.end());
    cout<<b[0];
return 0;
}
