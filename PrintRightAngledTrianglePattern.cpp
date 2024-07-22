#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
   for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        cout<<"Case #"<<i<<":"<<endl;
        for(int i=1;i<=n;i++){
            for(int j=n;j>=1;j--){
                if(j<=i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
