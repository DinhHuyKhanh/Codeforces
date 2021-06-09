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
    int t,x,y;
    string s;
    string s1="U",s2="D",s3="R",s4="L";
    cin>>t;
    while(t--){
        cin>>x>>y>>s;
        map<char,int> mp;
        int dem1=0,dem2=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(x<0){
            if(mp[s4[0]]>=abs(x)){
                if(y<0){
                    if(mp[s2[0]]>=abs(y)){
                        cout<<"YES\n";
                    }else{
                    cout<<"NO\n";
                    }
                }else{
                    if(mp[s1[0]]>=y){
                        cout<<"YES\n";
                    }else{
                    cout<<"NO\n";
                    }
                }
            }else{
            cout<<"NO\n";}
        }else{
            if(mp[s3[0]]>=abs(x)){
                if(y<0){
                    if(mp[s2[0]]>=abs(y)){
                        cout<<"YES\n";
                    }else{
                    cout<<"NO\n";
                    }
                }else{
                    if(mp[s1[0]]>=y){
                        cout<<"YES\n";
                    }else{
                    cout<<"NO\n";
                    }
                }
            }else{
            cout<<"NO\n";}
        }
    }

return 0;
}
