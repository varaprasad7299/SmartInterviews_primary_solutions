#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        stack<int>st;
        if(n==0){
            cout<<"0"<<endl;
            continue;
        }
        while(n){
            st.push(n&1);
            n=n>>1;
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}
