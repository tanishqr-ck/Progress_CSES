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
	while(n!=1)
	{
		cout<<n<<" ";
		if(n&1)
			n=3*n+1;
		else
			n=n/2;
	}
	cout<<1;
	return 0;
}