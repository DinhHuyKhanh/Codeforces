#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int dem=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dem++;
            if(dem==7) break;
        }
        else
            dem=1;
    }
    if(dem==7) cout<<"YES";
    else  cout<<"NO";
return 0;
}
