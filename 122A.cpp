#include<bits/stdc++.h>

using namespace std;


int main(){

   int a[12]={4,7,47,74,444,447,474,477,744,747,774,777};
    int status=0;
    int n;
    cin>>n;
    for(int i=0;i<12;i++)
    {
        if(n%a[i]==0) {
          status =1;
          break;
        }
    }
    if(status ==1) cout<<"YES";
    else cout<<"NO";
return 0;
}
