#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
int x=0;
string s,s1,s2,s3,s4;
s1="++X";
s2="X++";
s3="--X";
s4="X--";
int n;
cin>>n;
while(n--){
cin>>s;
if(s==s1 || s==s2) x++;
if(s==s3 || s==s4) x--;
}
cout<<x;
return 0;
}
