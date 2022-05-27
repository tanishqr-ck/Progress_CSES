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
	int t;
	cin>>t;
	while(t--){
	ll a,b;
	cin>>a>>b;
	if((2*a-b)>=0&&(2*b-a)>=0&&(2*a-b)%3==0&&(2*b-a)%3==0)
		cout<<"YES"<<ln;
	else
		cout<<"NO"<<ln;
	}