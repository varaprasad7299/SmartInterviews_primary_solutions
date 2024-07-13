#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

bool solve(vector<int>&a,int k){
    int n = a.size();
    int totSum=5000;
    vector<vector<bool>>dp(n,vector<bool>(totSum+1,false));
    //base cases
    if(a[0]%k==0) return true;
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    dp[0][a[0]]=true;
    for(int i=1;i<n;i++){
        for( int j=1;j<=totSum;j++){
            if(a[i]==0 ){
                return true;
            }
            if(a[i]<=j){
                int not_taken = dp[i-1][j];
                int taken = 0;
                taken = dp[i-1][j-a[i]];
                dp[i][j]=not_taken || taken;
            }
            else{
                dp[i][j]= false || dp[i-1][j];
            }      
        }   
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<totSum;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=totSum;i++){
        if(i%k==0 && dp[n-1][i]){
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
             cin>>a[i];
        }
        solve(a,k);
        if(solve(a,k)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        //cout<<endl<<endl;
        
    }
    return 0;
}
