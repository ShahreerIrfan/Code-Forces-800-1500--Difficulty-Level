/*
    For Division 3: 1400≤rating≤1599
    For Division 4: rating≤1399
*/

#include<bits/stdc++.h>
using namespace std;
void solve(int ratings){
    if(1900<=ratings){
        cout<<"Division 1"<<endl;
    }
    else if(1600<=ratings && 1899>=ratings){
        cout<<"Division 2"<<endl;
    }

    else if(1400<=ratings && 1599>=ratings){
        cout<<"Division 3"<<endl;
    }
    else {
        cout<<"Division 4"<<endl;
    }

}

int main(){

    int t;
    cin>>t;
    while(t--){
        int ratings;
        cin>>ratings;
        solve(ratings);
    }

    
}
