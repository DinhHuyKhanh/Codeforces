/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout<<3%10;

    int t,k;
    cin>>t;
    while(t--){
        int n;
        vector<int> a;
        map<int,int> mp;

        cin>>n;
        for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
            mp[k]++;
        }
        int res=0;
        int x=0;
        for(int i=0;i<a.size();i++){
                x=mp[a[i]];
            if(res<x){
                res=x;
            }
        }
        cout<<res<<endl;
    }

return 0;
}
