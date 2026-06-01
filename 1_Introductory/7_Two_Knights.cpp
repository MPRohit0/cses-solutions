//hint used 1: to find no of invalid positions. we imagine a 3 X 2 rectangle. each such rectangle = 2 invalid poisitions (knights on opposite diagonols). so no of invalid positions = 2 * 2 * (k-1)(k-2)


#include <bits/stdc++.h>
using namespace std;
 
long long val(long long n){
    return n*n*(n*n-1)/2 - 4*(n-1)*(n-2);
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
 
    for(long long i = 1; i<=n; i++){
        cout<<val(i)<<"\n";
    }
}