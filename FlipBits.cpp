#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int checkbit(long long int a,long long int i){
    long long int b=1<<i;
    if((a&b)){
        return 1;
    }
    return 0;
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long c=0;
        for(long long int i=0;i<=30;i++){
            c+=checkbit(a,i)^checkbit(b,i);
        }
        cout<<c<<endl;
    }
    return 0;
}
