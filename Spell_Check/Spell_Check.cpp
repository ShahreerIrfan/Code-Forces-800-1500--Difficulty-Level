#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    string given_string = "Timur";
    sort(given_string.begin(),given_string.end());
    sort(s.begin(),s.end());
    if(s==given_string){
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s);
    }

}