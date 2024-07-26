#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
long int year;
long int months;
long int day;
long int totalDays;
bool islp(int year){
    if((year%4==0 && year%100 != 0) || (year%400==0)){
        return true;
    }
    return false;
}
string printDay(int day){
    vector<string>days={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    long int x=totalDays%7;
    return days[x];
}
string printMonth(long int M){
    vector<string>months={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    return months[M-1];
}
void solve(long int seconds){
    int spd=86400;
    long int days=seconds/spd;
    totalDays=days;
    vector<int>dom={31,28,31,30,31,30,31,31,30,31,30,31};
    year=1970;
    while(days>=(365 + islp(year))){
        days-=365+islp(year);
        year++;
    }
    months=1;
    while(months==2 ? days>=(dom[months-1]+islp(year)) : days>=dom[months-1]){
        days-=dom[months-1];
        if(months==2 && islp(year)){
            days-=1;
        }
        months++;
    }
    day=days+1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long int s;
        cin>>s;
        solve(s);
        if(day<10){
            cout<<"0";
        }
        cout<<day<<"-"<<printMonth(months)<<"-"<<year<<" "<<printDay(day)<<endl;
    }
    return 0;
}
