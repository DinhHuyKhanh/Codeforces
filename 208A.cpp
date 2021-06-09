#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,s1="";
    cin>>s;
    string s2="W",s3="U",s4="B";

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s2[0] && s[i+1]==s3[0] && s[i+2]==s4[0]){
            cout<<s1;
            s1=" ";
            i+=2;
        }else {
            s1+=s[i];
        }
    }
    cout<<s1;

return 0;
}
