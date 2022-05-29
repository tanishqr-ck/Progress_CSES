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
    ll num=0;
    vector<string> s;
    while(num<pow(2,n))
    {
        string st="";
    for(int i=n-1;i>=0;i--)
    st+=num&1<<i?"1":"0";
         s.pb(st);
    num++;
    }
    for(auto it:s)
    { 
        string temp;
        temp=it[0];
        for(int i=1;i<n;i++)
        {
            if((it[i]=='0'&&it[i-1]=='1'))
            temp+="1";
            else if(it[i]=='1'&&it[i-1]=='0')
            temp+="1";
            else
            temp+="0";
        }
        cout<<temp<<ln;

    }
}