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
	string n;
	cin>>n;
	int m=1;
	int c=1;
	for(int i=1;i<n.length();i++)
	{
	 if(n[i]==n[i-1])
		 c++;
	 else
	 {
		 m=max(m,c);
		 c=1;
	 }
	}
	m=max(m,c);
	cout<<m;
	return 0;
}