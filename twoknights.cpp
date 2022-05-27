#include <bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb(x) push_back(x)
#define popb pop_back()
#define ln "\n"
#define ar array
using namespace std;
typedef long long ll;
const int mxn=2e5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 ll x;
  cin>>x;
  for(ll n=1;n<=x;n++)
cout<<((n*n)*(n*n-1)/2-4*(n-1)*(n-2))<<ln;
}