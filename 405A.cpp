#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> a;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());

    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
return 0;
}
