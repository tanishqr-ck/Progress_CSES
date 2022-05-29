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
bool srtsec(array<int,2> a,array<int,2> b)
{
    return a[1]<b[1];
}
int main()
{
    int n;
    cin>>n;
    vector<array<int,2>> movies;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        array<int,2> temp;
        temp[0]=a,temp[1]=b;
        movies.pb(temp);
    }
    sort(movies.begin(),movies.end(),srtsec);
int ans=1;
//  for(int i=0;i<n;i++)
//  cout<<movies[i][0]<<"  "<< movies[i][1]<<ln;
int cmp=movies[0][1];
for(int i=1;i<n;i++)
{
    if(movies[i][0]>=cmp)
    ans++,cmp=movies[i][1];
}
cout<<ans;
}