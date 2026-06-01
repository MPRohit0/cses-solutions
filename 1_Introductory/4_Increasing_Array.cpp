#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    
    vector<int> given(n);
    for(int &i: given){
        cin>>i;
    }
 
    long long ans = 0;
    for(int i = 0; i<n-1; i++){
        if(given[i]>given[i+1]){
            ans += (given[i]-given[i+1]);
            given[i+1] += (given[i]-given[i+1]);
        }
    }
 
    cout<<ans<<"\n";
}