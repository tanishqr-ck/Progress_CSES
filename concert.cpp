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
    int n,m;
    cin>>n>>m;
    multiset<int> avail;
    for(int i=0;i<n;i++)
  {
      int t;
      cin>>t;
      avail.insert(t);
  }
   for(int i=0;i<m;i++)
   {
       int x;
       cin>>x;
       auto it=avail.upper_bound(x);
       if(it==avail.begin())
       cout<<-1<<ln;
       else{
           it--;
           cout<<*it<<ln;
           avail.erase(it);
       }
   }
   
    }

