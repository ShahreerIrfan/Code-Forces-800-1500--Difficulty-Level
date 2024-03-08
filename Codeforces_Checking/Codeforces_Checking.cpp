#include<bits/stdc++.h>
using namespace std;
void solve(char c){
    bool is_has = false;
    string s = "codeforces";
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            is_has = true;
            break;
        }
    }
    if(is_has){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        solve(c);
    }
    return 0;
}