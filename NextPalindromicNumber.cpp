#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
const long long int m = 1e9+7;
using namespace std;
bool isPalin(string s){
    int j=s.size()-1;
    for(int i=0;i<=j;i++){
        if(s[i]!=s[j]){
            return false;
        }
        j--;
    }
    return true;
}
bool is9(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!='9'){
            return false;
        }
        
    }
    return true;
}
string palin9(string s){
    string x="1";
    int n=s.size();
    for(int i=1;i<n;i++){
        x+="0";
    }
    x+="1";
    return x;
}
string p1(string s){
    int n=s.size();
    int idx=n/2;
    int f=1;
    int x;
    while(f && idx<n){
        x=s[idx]-48;
        x++;
        f=x/10;
        s[idx]=(x%10)+48;
        idx++;
    }
    int j=n-1;
    for(int i=0;i<=j;i++){
        s[i]=s[j];
        j--;
    }
    return s;
}
string p2(string s){
    int n=s.size();
    int j=n-1;
    for(int i=0;i<=j;i++){
        if(s[i]>s[j]){
            s[j]=s[i];
        }
        if(s[i]<s[j]){
            s[j]=s[i];
            int f=1;
            int idx=j-1;
            int x;
            while(f && idx>=0){
                 x=s[idx]-48;
                 x++;
                 f=x/10;
                 s[idx]=(x%10)+48;
                idx--;
            }
        }
        j--;
    }
    return s;
}
string solve(string s){
    if(isPalin(s)){
        if(is9(s)){
            return palin9(s);
        }
        return p1(s);
    }
    return p2(p2(s));
}
int main() {
    int t;
    scanf("%d ",&t);
    while(t--){
        string str;
        cin>>str;
        cout<<solve(str)<<endl;
    }  
    return 0;
}
