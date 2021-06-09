/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    for(int i = 0 ; i<s.size();i++){
        if(i%2==0){
            // alice
            if(s[i]==97){
                s[i]+=1;
            }else
            {
                s[i]=97;
            }
        }else{
            if(s[i]==122){
                s[i]-=1;
            }else{
            s[i] = 122;
            }
        }
    }
    cout<<s<<endl;
   }

return 0;
}
