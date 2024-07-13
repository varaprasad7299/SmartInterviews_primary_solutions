#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int mod = 1e9+7;
void print(vector<int>&a,int n){
    for(int i=0;i<n;i++){
        if(a[i]!=-1)
        cout<<a[i];
        else cout<<'_';
    }
    cout<<endl;
}
long int sum(vector<int>&a){
    int tsum=0;
    for(int i=0;(long unsigned int)i<a.size();i++){
        tsum+=a[i];
    }
    return tsum;
}
void solve(vector<int>a,vector<int>b,int iA,int iB,int n,int m,int k){
    if( iB==m){
        print(a,n);
        return;
    }
    for(int i=iA;i<n;i++){
        for(int j=i;j<i+b[iB];j++){
            if(j>=n) return;
            a[j]=iB;
        }
        solve(a,b,i+b[iB]+k,iB+1,n,m,k);
        a[i]=-1;
    }
}
int main() {
    vector<vector<long long int>>dp(1001,vector<long long int>(1001,0));
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            dp[i][j]=(dp[i-1][j]+dp[i][j-1]+1)%mod;
        }
    }
    int t;
    cin>>t;
    int T=t;
    while(t--){
        cout<<"Test Case #"<<T-t<<":"<<endl;
        int n;
        cin>>n;
        if(n==0){
            cout<<endl;
            continue;
        }
        int k;
        cin>>k;
        int m;
        cin>>m;
        vector<int>a(m);
        vector<int>A(n,-1);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int n1=n-sum(a);
        int y=n1-((m-1)*k);
        
        if(dp[m][y]+1>=100){
            cout<<dp[m][y]+1<<endl;
        }
        else{
            //if(k!=0)
            solve(A,a,0,0,n,m,k);
        }
        cout<<endl;
    }
    return 0;
}
