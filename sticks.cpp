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
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);ll med;
    if(n&1)
    med=a[n/2];
    else
    med=(a[n/2]+a[n/2-1])/2;
    ll cost=0;
    for(int i=0;i<n;i++)
    cost+=abs(med-a[i]);
    cout<<cost;

}