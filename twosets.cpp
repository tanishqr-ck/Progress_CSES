#include <bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb(x) push_back(x)
#define popb pop_back()
#define ln "\n"
#define rep(j,n) for(int i=j;i<n;i++)
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
	cin>>n;
ll sum=n*(n+1)/2;
if(sum&1==1)
{
cout<<"NO";
return 0;
}
else
{cout<<"YES"<<ln;
	ll avg=sum/2;
	vector<int> a,b;ll c=0;
	for(int i=n;i>0;i--)
	{
		if(c+i<=avg)
		{
			c+=i;
			a.pb(i);
		}
		else
			b.pb(i);
			}
	cout<<a.size()<<ln;
	for(auto x:a)
		cout<<x<<" ";
	cout<<ln;
	cout<<b.size()<<ln;
	for(auto y:b)
		cout<<y<<" ";
}
}