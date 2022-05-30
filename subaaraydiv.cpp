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
    ll n,x;
    cin>>n;
    x=n;
 map<ll,ll> hash;
   hash[0]=1;
   ll sum=0;ll ans=0;
   for(ll i=0;i<n;i++)
   {
       int temp;
       cin>>temp;sum+=temp;
       int r=sum%x;
       if(r<0)
       r+=x;
       auto it=hash.find(r);
       if(it!=hash.end())
         ans+=it->second;
         hash[r]++;

   }
   cout<<ans;
}