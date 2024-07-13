#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1;
        cin>>s1;
         cin.ignore();
      //  cout<<s1<<endl;
        string s2;
        cin>>s2;
         cin.ignore();
       // cout<<s2<<endl;
        int c0=0;
        int c1=0;
        int st0=0;
        int st1=0;
        int n=s1.size();
        if(s1==s2){
            cout<<"YES 0"<<endl;
            continue;
        }
        
        for(int i=0;i<n;i++){
            if(s1[i]=='0'){
                st0++;
            }
            else{
                st1++;
            }
            if(s1[i]=='0' && s2[i]=='1'){
                c0++;
                
            }
            else if(s1[i]=='1' && s2[i]=='0'){
                c1++;
            }
        }
        //    cout<<c0<<" "<<c1<<endl;
            if(st1==0 || st0==0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES ";
                if(c0>=c1){
                    cout<<c1+(c0-c1)<<endl;
                }
                else{
                    cout<<c0+(c1-c0)<<endl;
                }
            }
            
        
    }
    return 0;
}
