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
int n,m,k;
cin>>n>>m>>k;
int dis[n];
int app[m];
for(int i=0;i<n;i++)
	cin>>dis[i];
for(int i=0;i<m;i++)
	cin>>app[i];
sort(dis,dis+n);
sort(app,app+m);
int i=0,j=0;
int ans=0;
while(i<n&&j<m)
{
  if(dis[i]>=app[j]-k&&dis[i]<=app[j]+k)
  {
	  ans++;
	  i++;
	  j++;
  }	  
  else if(dis[i]>app[j])
	  j++;
  else
	  i++;
 
}
cout<<ans;
}