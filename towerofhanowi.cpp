#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define mod 1000000007
#define mp make_pair
#define pb(x) push_back(x)
#define popb pop_back()
#define ln "\n"
#define rep(i,n) for(int i=0;i<n;i++)
#define ar array
#define sp " "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
const int mxn=2e5;
vector<pair<int,int>> s;
void tower(int n,int a,int b,int c)
{
    if(n>0)
    {
        tower(n-1,a,c,b);
        s.pb(mp(a,c));
        tower(n-1,b,a,c);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n;
   cin>>n;
   tower(n,1,2,3);
   cout<<s.size()<<ln;
   for(auto x:s)
   cout<<x.first<<" "<<x.second<<ln;
 
 
}