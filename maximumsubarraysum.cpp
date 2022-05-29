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
 int n;
 cin>>n;ll a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }  
 ll ans=a[0],temp=a[0];
 for(int i=1;i<n;i++)
 {
   temp=max(temp+a[i],a[i]);
   ans=max(ans,temp);
 }
 cout<<ans;
}