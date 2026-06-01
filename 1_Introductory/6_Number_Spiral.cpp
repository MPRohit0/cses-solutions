#include <bits/stdc++.h>
using namespace std;

//hint used 1: you have to imagine the array in terms of layers
//hint used 2: starting element of a odd layer, is (m+1)**2. if m is the number (from 0)  

long long val(int i, int j){
    long long layer = max(i,j);
    long long s = 0;
 
    if(layer%2==0){
        s += (layer+1)*(layer+1);
        s -= (i + (layer-j));
 
    }else{
        s = (layer*layer)+1;
        s += (i + (layer-j));
    }
 
    return s;
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
 
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        cout<<val(a-1,b-1)<<"\n";
    }
}