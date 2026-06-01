//lesson learned: constraints are very important and I should always look at them once before i code

#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin>>n;
 
	long long total = (long long int)n*(n+1)/2;
	long long sum = 0;
	for(int i = 0; i < n-1; i++){
		int temp;
		cin >> temp;
		sum += temp;
	}
 
	cout<<total-sum<<"\n";
	
}