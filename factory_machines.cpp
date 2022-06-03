#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define mod 1000000007
#define mp make_pair
#define pb(x) push_back(x)
#define popb pop_back()
#define ln "\n"
#define ar array
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
typedef long long ll;
int main()
{
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
   ll l,u;
   l=0,u=1e18;
   while(l<u)
   {
       ll mid=l+(u-l)/2;
       ll temp=0;
       for(ll i=0;i<n;i++)
       temp+=min(mid/a[i],ll(1e9));
       if(temp>=t)
       u=mid;
       else
       l=mid+1;
   }
   cout<<u;
}