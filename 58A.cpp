#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,res="";
    string s1="hello";
    cin>>s;
    int vt=0;
    for(int i=0;i<s1.size();i++)
    {
        for(int j=vt;j<s.size();j++)
        {
            if(s1[i]==s[j]){
                res=res+s[j];
                vt=j+1;
                break;
            }
            if(j==s.size()-1) vt=s.size();
        }

    }
    if(res==s1) cout<<"YES";
    else cout<<"NO";

return 0;
}
