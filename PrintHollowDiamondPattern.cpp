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
        int x=n/2;
        for(int k=0;k<n;k++){
            for(int j=0;j<n;j++){
                if(abs(k-j)==x || (k+j==x)|| (k-((n-1)-j))==x){
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
