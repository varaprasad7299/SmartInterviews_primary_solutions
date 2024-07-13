#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int ml=100;
int mr=100;
int mh=0;
void insrt(vector<vector<char>>&p,map<int,int>&m,int pos,int pl){
   // cout<<pl<<endl;
    if(pl==0){
        p[pl][pos]='O';
        m[pos]++;
        ml=min(ml,pos);
        mr=max(mr,pos);
        return;
    }
    if(p[pl-1][pos+1]=='.'){
        insrt(p,m,pos+1,pl-1);
        return;
    }
    if(p[pl-1][pos-1]=='.'){
        insrt(p,m,pos-1,pl-1);
        return;
    }
    p[pl][pos]='O';
    m[pos]++;
    mh=max(mh,pl);
    
}
int main() {
    int t;
    cin>>t;
    int T=t;
    while(t--){
        cout<<"Case "<<T-t<<":"<<endl;
        int n;
        cin>>n;
        vector<int>a(n);
        vector<vector<char>>p(50,vector<char>(200,'.'));
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            insrt(p,m,a[i]+100,((m.find(a[i]+100)!=m.end())?m[a[i]+100]:0));
            if(i==0){
                ml=a[i]+100;
            }
        }
        
        for(int i=mh;i>=0;i--){
            for(int j=ml;j<=mr;j++){
                cout<<p[i][j];
            }
            cout<<endl;
        }
        m.clear();
        ml=100;
        mr=100;
        mh=0;
    }
    return 0;
}
