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
	ll n;
	cin>>n;
	if(n>3){
	for(int i=2;i<=n;i+=2)
		cout<<i<<" ";
	for(int i=1;i<=n;i+=2)
		cout<<i<<" ";
	}
	else if(n==1)
		cout<<1;
	else
		cout<<"NO SOLUTION";
	return 0;
}