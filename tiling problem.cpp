#include <bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
using namespace std;
ll tiling(ll n)
{
	if(n==0)
		return 1;
	else if(n<0)
		return 0;
	else{
		return tiling(n-1)+tiling(n-4);
	}
}
int main()
{

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
	#endif
	ll n;
	cin>>n;
	//cout<<n;

	cout<<tiling(n)<<endl;
	
}

