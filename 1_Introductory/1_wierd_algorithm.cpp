#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long int n;
    cin>>n;
 
    while(1){
        cout<<n<<" ";
        if(n == 1){
            cout<<"\n";
            break;
        }
 
 
        n = n%2==0 ? n/2: n*3+1;
    }
 
    
}