#include<bits/stdc++.h>

using namespace std;
const int smax =101;
int main(){
int a[smax];
int b[smax];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    b[a[a[a[a[i]-1]-1]-1]-1]=a[a[a[i]-1]-1];
}
for(int i=0;i<n;i++)
{
    cout<<b[i]<<" ";
}


}
