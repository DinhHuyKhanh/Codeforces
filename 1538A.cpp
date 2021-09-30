#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,minx=999999999,maxx=0,index1,index2;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>maxx){
            maxx= a[i];
            index1=i;
        }
        if(a[i]<minx){
            minx= a[i];
            index2=i;
        }
    }

    int res=0,x,y,res1=0,res2=0,res3;
    x=n-index1+1;
    y= n-index2 +1;

    if(index1 >= x && index2 >= y){
        res= max(x,y);
    }else if(index1 <= x && index2 <= y){
        res= max(index1,index2);
    }else if(index1 <= x && index2 >y){
        res1 = index1 + y;
        res2 = index1;
        res2 += min(abs(index2-index1),y);
        res3 = y;
        res3 += min(abs(index2-index1),index1);
        res= min(res1,min(res2,res3));
        }
        else if(index1 >x && index2 <= y){
        res1 = index2 + x;
        res2 = index2;
        res2 += min(abs(index2-index1),x);
        res3 = x;
        res3 += min(abs(index1-index2),index2);
        res= min(res1,min(res2,res3));
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
