#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        unsigned int n;
        cin>>n;
        long long int ans=0;
        for(int i=0;i<=30;i++){
            ans|=(n&1);
            ans<<=1;
            n>>=1;
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
