#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    set<int>s;
    for(int i=0;i<n;i++) s.insert(arr[i]);
    cout<<s.size()<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

// ..........