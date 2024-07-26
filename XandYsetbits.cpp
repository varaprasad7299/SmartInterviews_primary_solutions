#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool checkbit(long long int a,long long int i){
    long long int b=1<<i;
    if((a&b)){
        return true;
    }
    return false;
}
long long int solve(long long int a,long long int b){
    long long int ans=1;
    long long int x=a%1000000007;
    for(long long int i=0;i<=log2(b);i++){
         if(checkbit(b%1000000007,i)){
             ans=(ans%1000000007)*(x%1000000007);
         }
        x=(x%1000000007)*(x%1000000007);
    }
    return ans%1000000007;
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int ans;
        if(a!=b){
             ans=(solve(2,a%1000000007)+solve(2,b%1000000007))%1000000007;
        }
        else{
             ans=solve(2,a%1000000007)%1000000007;
        }
        cout<<ans%1000000007<<endl;
    }
    return 0;
}
