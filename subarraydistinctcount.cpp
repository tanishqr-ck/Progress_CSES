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
    int n,k;
    cin>>n>>k;ll ans=0;
    map<int,int> s;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i=0,j=0;
    while(i<n)
    {
     s[a[i]]++;
     while(s.size()>k)
     {
         
         if(s[a[j]]==1)
         s.erase(a[j]);
         else
         s[a[j]]--;
         j++;

     }
     ans+=ll(i-j)+1;
     i++;
    }
    cout<<ans;
    }
