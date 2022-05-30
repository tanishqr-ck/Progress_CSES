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
    int n,x;
    cin>>n>>x;
   unordered_map<ll,ll> hash;
   hash[0]=1;
   ll sum=0;ll ans=0;
   for(int i=0;i<n;i++)
   {
       int temp;
       cin>>temp;sum+=temp;
       auto it=hash.find(sum-x);
       if(it!=hash.end())
         ans+=it->second;
         hash[sum]++;

   }
   cout<<ans;
}