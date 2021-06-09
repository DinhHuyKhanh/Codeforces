#include<bits/stdc++.h>

using namespace std;
void solve(){
    string s;
    cin>>s;
    bool use[s.size()];

    for(int i=0;i<s.size();i++){ // tạo  bool use có độ dài là s.size() đánh dấu tắt cả false
        use[i]= false;             // có nghĩ là chưa có sự thay đổi nào
    }
    int ans=0; // kết quả

    for(int i=1;i<s.size();i++){
            bool use_need=false; // tạo use_need = false kiểm tra xem s[i] có sự thay đổi hay không
        if(s[i]==s[i-1] && !use[i-1]){  // nếu s[i] bằng s[i-1] và s[i-1] chưa thay đổi thì s[i] thay đổi
            use_need = true;            // đổi trạng  thai use_need = true
        }
        if(s[i]==s[i-2] && !use[i-2]){ // nếu s[i] bằng s[i-2] và use[i-2] chưa bị thay đổi  thì s[i] thay đổi
            use_need = true;            // đổi trạng thái
        }
        use[i]=use_need;                // lưu trạng thái của của s[i] lại vào use[i]
        ans += use_need;                // nếu use_need là false tương ứng với 0 ngược lại thì là 1
    }
    cout<<ans<<endl;
    return;
}

int main(){

int t;
cin>>t;
while(t--){
    solve();
}
return 0;
}
