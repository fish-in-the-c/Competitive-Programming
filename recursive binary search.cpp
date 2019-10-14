#include <bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
using namespace std;
ll binarySearch(ll arr[], ll start, ll end, ll target)
{
	ll middle = (start+end)/2;
	if(arr[middle]==target)
	{
		return middle;
	}
	else if(end<start)
		return -1;
	else if(target>arr[middle])
		return binarySearch(arr, middle+1, end, target);
	else if(target<arr[middle])
		return binarySearch(arr, start, middle-1, target);
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
	ll arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	ll target;
	cin>>target;
	cout<<binarySearch(arr, 0,n-1,target)<<endl;
	
}

