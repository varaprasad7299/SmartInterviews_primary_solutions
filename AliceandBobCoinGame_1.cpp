#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    int T=t;
    while(t--){
        cout<<"Test-Case #"<<T-t<<":"<<endl;
        long long int n,m;
        cin>>n>>m;
        string s1;
        cin>>s1;
        string s2=(s1=="Alice")?"Bob":"Alice";
        cout<<"G1: ";
        if(n%(m+1)==0){
            cout<<s2<<endl;
        }
        else{
            cout<<s1<<endl;
        }
        cout<<"G2: ";
        if(s1=="Alice"){
            if(n==m+1){
                cout<<s2<<endl;
            }
            else{
                cout<<s1<<endl;
            }
        }
        else{
            if(n<=m || n==m+(m+1)){
                cout<<s1<<endl;
            }
            else{
                cout<<s2<<endl;
            }
        }
        cout<<"G3: ";
        long long int x=n/m;
        if(n%m!=0){
            x+=1;
        }
        if(x%2!=0){
            cout<<s1<<endl;
        }
        else{
            cout<<s2<<endl;
        }
        if(t!=0){
            cout<<endl;
        }
    }
    return 0;
}
