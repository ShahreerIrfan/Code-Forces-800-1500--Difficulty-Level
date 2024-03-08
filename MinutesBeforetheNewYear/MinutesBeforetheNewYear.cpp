#include<bits/stdc++.h>
using namespace std;
void solve(int hours,int minutes){
    int remaning_hours = 23 - hours;
    int total_time_remaining = remaning_hours*60 + (60-minutes);
    cout<<total_time_remaining<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int hours,minutes;
        cin>>hours>>minutes;
        solve(hours,minutes);
    }

}