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
ll bin(ll a, ll b) {
 if (b == 0)
    return 1;
ll res = bin(a, b / 2);
if (b % 2)
        return ((res%mod) * (res%mod) * a)%mod;
    else
        return (res%mod * res%mod);
}
int main()
{
	ll n;
	ll m=2;
	cin>>n;
	ll ans=bin(m,n);
	cout<<ans;
}