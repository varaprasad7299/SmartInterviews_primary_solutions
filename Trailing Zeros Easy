#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int mod = 1e15+7;

bool checkbit(long long int a,long long int i){
    return (a>>i) & 1;
}
long long int solve(long long int a,long long int b){
    long long int ans=1;
    long long int x=a%mod;
    for(long long int i=0;i<=log2(b);i++){
         if(checkbit(b%mod,i)){
             ans=(ans%mod)*(x%mod);
         }
        x=(x%mod)*(x%mod);
    }
    return ans%mod;
}

long long int countZeroes(long long int n){
    long long int c=0;
    long long int i=1;
    while((n/(solve(5ll,i%mod)))){
        c+=((n/solve(5ll,i))%mod)%mod;
        i++;
    }
    return c;
}

int main() {
    int t;
   // cin>>t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        //cin>>n;
        scanf("%lld ",&n);
        //cout<<countZeroes(n)<<endl;
        printf("%lld\n",countZeroes(n)%mod);
    }
    return 0;
}
