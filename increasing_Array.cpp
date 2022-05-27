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
	ll d;
		cin>>d;
ll ans=0;
	for(int i=1;i<n;i++)
	{ll c;
		cin>>c;
				if(c<d)
					ans+=d-c;
				else
				d=c;
	}
	cout<<ans;
	return 0;
}