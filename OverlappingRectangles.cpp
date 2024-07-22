#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long int x11,y11,x12,y12;
        cin>>x11>>y11>>x12>>y12;
        long long int x21,y21,x22,y22;
        cin>>x21>>y21>>x22>>y22;
        long long int a1=0;
        long long int a2=0;
        a1=abs(x11-x12)*abs(y11-y12);
        a2=abs(x21-x22)*abs(y21-y22);
        long long int xx = (min(x12,x22)-max(x11,x21));
        long long int xy = (min(y12,y22)-max(y11,y21));
        long long int xa = 0;
        if(xx>0 && xy>0){
            xa=xx*xy;
        }
         
        cout<<(a1+a2)-xa<<endl;
    }
    return 0;
}
