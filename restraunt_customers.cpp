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
{ int ans=0;
    int n;cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int i=0,j=0;int t=0;
    while(i<n&&j<n)
    {
       if(a[i]>b[j])
       t--,j++;
       else
       t++,i++;
       ans=max(ans,t);
    }
    cout<<ans;
    
}