//hint used 1: for mod 10^9 + 7 is represented as 1e9+7 in cpp.


#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int lol(int n){
    vector<int> space(n+1,0);
    space[0] = 1;
 
    for(int i = 0; i<n; i++){
        for(int k = 1; k<=6; k++){
            if(i+k <=n){
                space[i+k] = (space[i] + space[i+k])%MOD;
            }
        }
    }
 
    return space[n];
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
 
    cout<<lol(n)<<"\n";
 
}