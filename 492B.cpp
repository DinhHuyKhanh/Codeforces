#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long  n,l,x;
    vector<long long> a;
    cin>>n>>l;
    while(n--){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    long long smin=a[0]*2;
    if((l-a[a.size()-1])*2 > smin) smin= (l - a[a.size()-1])*2;
    for(int i=1;i<a.size();i++){
        if(a[i]-a[i-1] > smin) smin=a[i]-a[i-1];
    }
    printf("%f",smin/2.0);

return 0;
}
