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
unordered_map<char,string> s;
for(int i=0;i<st.length();i++)
s[st.at(i)]+=st.at(i);
string pre="",suf="",mid="";int f=1;
for(auto it:s)
{
    int n=it.second.length();
    if(n%2==0)
    {
        pre+=it.second.substr(0,n/2);
        suf=it.second.substr(0,n/2)+suf;

    }
    else{
        if(f==1)
        {
            mid=it.second;
            f=0;
        }
        else
        {
            cout<<"NO SOLUTION"<<ln;
            return 0;
        }
    }
}
cout<<pre+mid+suf<<ln;

}