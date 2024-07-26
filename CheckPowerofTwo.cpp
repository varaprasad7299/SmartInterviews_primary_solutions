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
       
        if((n & (n-1) )== 0){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
    return 0;
}
