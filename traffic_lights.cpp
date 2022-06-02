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
    cin>>x>>n;
    set<int> a;
    a.insert(0);
    a.insert(x);
    multiset<int> b;
    b.insert(x);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        
       auto it=a.upper_bound(temp);
        auto it2=it;
        it2--;
        b.erase(b.find(*it - *it2));
        b.insert(temp - *it2);
        b.insert(*it - temp);
        a.insert(temp);
        auto it3=b.end();
        it3--;
        cout<<*it3<<" ";
    }

    
}
