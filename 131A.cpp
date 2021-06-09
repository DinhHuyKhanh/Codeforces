    #include<bits/stdc++.h>

    using namespace std;

    int main(){
        string s;
        cin>>s;
        string s1=s;
        sort(s.begin()+1,s.end());

        if(s.size() ==1){
            if(s[0]>=97) s[0]-=32;
            else s[0] +=32;
            cout<<s;
            return 0;
        }

        if(s[s.size()-1] < 97) {
            for(int i=0;i<s.size();i++)
            {
                if(s1[i]<97) s1[i]+=32;
                else s1[i] -= 32;
            }
            cout<<s1;
        }else cout<<s1;

    return 0;
    }
