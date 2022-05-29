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
    ar<int,2> a[n];
    for(int i=0;i<n;i++)
    cin>>a[i][0],a[i][1]=i+1;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int x2=x-a[i][0];
        int j=i+1,k=n-1;
        while(j<k)
        {
            if(a[j][0]+a[k][0]==x2)
            {
                cout<<a[i][1]<<" "<<a[j][1]<<" "<<a[k][1];
                return 0;
            }
            else if(a[j][0]+a[k][0]>x2)
           k--;
           else
           j++;
        }
    }
    cout<<"IMPOSSIBLE";
}
