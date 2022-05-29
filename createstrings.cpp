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
    string st;
    cin>>st;
    sort(st.begin(),st.end());
    string s="";int c=0;
    do{
        s+=st+"\n";
  c++;
    }
    while(next_permutation(st.begin(),st.end()));
    cout<<c<<ln<<s;
}