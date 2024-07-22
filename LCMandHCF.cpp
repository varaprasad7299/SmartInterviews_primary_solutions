#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int &a,int &b){
    int t;
    t=a;
    a=b;
    b=t;
}
long long int gcd(long long int a,long long int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int r=gcd(a,b);
        
        cout<<(a*b)/r<<" "<<r<<endl;
       
    }
    return 0;
}
