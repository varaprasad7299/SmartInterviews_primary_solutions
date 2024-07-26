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
        long int n;
        cin>>n;
        int c=0;
        while(n){
            c++;
            n=n & (n-1);
        }
        cout<<c<<endl;
    }
    return 0;
}
