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
        int k=0;
         int i=0;
        int j=0;
        while(k<n){

        while(j<n-k){
            cout<<a[i][j]<<" ";
            j++;
        }
        j--,i++;
        while(i<n-k){
            cout<<a[i][j]<<" ";
            i++;
        }
        i--,j--;
        while(j>=k){
            cout<<a[i][j]<<" ";
            j--;
        }
        j++,i--;
        while(i>k){
            cout<<a[i][j]<<" ";
            i--;
        }
        i++,j++;
        k++;
        }
        cout<<endl;


    }
    return 0;
}

