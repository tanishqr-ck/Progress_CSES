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
    cin>>n;
    vector<int> a;
    for(int i=1;i<=n;i++)
    a.pb(i);int k;
    cin>>k;
    k++;
    int index=k-1;
    while(a.size()>1)
    {
       vector<int> b;int t=0;
       for(int i=0;i<a.size();i++)
       {
           if(i!=index)
           b.pb(a[i]);
           else{
           cout<<a[i]<<" ";
      index=(index+k)%a.size();
       }
      
    }
    a.clear();
    copy(b.begin(), b.end(), back_inserter(a));
}
for(auto x: a)
cout<<x<<" ";
}