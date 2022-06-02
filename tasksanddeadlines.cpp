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
bool asc(ar<int,2> a,ar<int,2> b)
{
    if(a[0]!=b[0])
    return a[0]<b[0];
    else
    return b[1]<a[1];
}
int main()
{
    int n;
    cin>>n;
    ar<int,2> a[n];
    for(int i=0;i<n;i++)
    cin>>a[i][0]>>a[i][1];
    sort(a,a+n,asc);
    ll f=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        f+=a[i][0];
        ans+=ll(a[i][1]-f);

    }
    cout<<ans;
}