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
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int s=0;
        for(int k=-(n-1);k<n;k++){
            s=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i-j==k){
                        s+=a[i][j];
                    }
                }
            }
            cout<<s<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}
