#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string n;
    cin>>n;
 
    char prev = n[0];
    int freq = 0;
    int ans = INT_MIN;
 
    for(char i: n){
        if(i == prev){
            freq++;
            ans = max(ans,freq);
        }else{
            prev = i;
            freq = 1;
        }
    }
 
    cout<<ans;
}