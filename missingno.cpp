#include <bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb(x) push_back(x)
#define popb pop_back()
#define ln "\n"
#define ar array
using namespace std;
typedef long long ll;
const int mxn=2e5;
int main()
{
	ll n;
	cin>>n;
	ll sum=0;
	for(int i=0;i<n-1;i++)
	{
		ll a;
		cin>>a;
		sum+=a;
	}
	cout<<(n*(n+1)/2)-sum<<ln;
		return 0;
}