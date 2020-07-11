#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int dp[4005];
	fill(dp+1,dp+4005,-1e9);	
	int n;
	cin>>n;	
	for(int a;cin>>a;)	
		for(auto i=a;i<=n;i++)		
			dp[i] = max(dp[i], dp[i-a]+1);	
	cout<<dp[n];
}