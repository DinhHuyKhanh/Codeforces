/**
 *    @author:  huykhanh
 *    @created: 4/2/2021
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,s=0,x=0;
    long long res;
    cin>>n;
        res=0;
        for(int i=1;x<n;i++){
            s += i;
            x +=s;
            res++;
        }
        res= (x==n)? res:res-1;
        cout<<res;





return 0;
}
