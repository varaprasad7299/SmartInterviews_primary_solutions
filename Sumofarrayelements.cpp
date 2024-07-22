#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long long int sum=0;
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    long long int a[n];
        sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}
