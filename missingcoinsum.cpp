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
 ll n;
 cin>>n;
ll a[n];ll sum=1;
 for(int i=0;i<n;i++)
 cin>>a[i];
 sort(a,a+n);
 for(int i=0;i<n;i++)
 {
     if(sum<a[i])
     {
         cout<<sum<<ln;
         return 0;
     }
     sum+=a[i];
 }
 cout<<sum;
}