#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x,ans=0;
    cin>>n;
    vector<int> cnt;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;

    }
    //sort(a.begin(),a.end());

    /*for(int i=0;i<n;i++)
    {
        if(a[i]+a[i+1]<4){
            ans++;
            i=i+2;
        }else
        {
            ans++;
        }
    }
    cout<<ans; */

    ans+=mp[4];
    ans+=mp[3];
    if(mp[1]>mp[3]) mp[1]-= mp[3];
    else mp[1]=0;
    ans += mp[2]/2;
    if(mp[2]%2!=0)
    {
        ans++;
        if(mp[1]>=2) mp[1]-=2;
        else mp[1]=0;
    }
    ans+=mp[1]/4;
    if(mp[1]%4!=0) ans+=1;
    cout<<ans;
return 0;
}
