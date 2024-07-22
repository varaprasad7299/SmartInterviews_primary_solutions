#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        cout<<"Test Case #"<<k<<":"<<endl;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[n-1-j][i]<<" ";
            }
            cout<<endl;
        }
        
    }  
    return 0;
}
