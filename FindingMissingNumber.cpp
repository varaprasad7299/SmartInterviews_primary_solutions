#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int ans=0;
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            ans^=a[i];
        }
        for(long long int i=1;i<=n+1;i++){
            ans^=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}
