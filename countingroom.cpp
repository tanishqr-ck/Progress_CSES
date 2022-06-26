#include<bits/stdc++.h>
#define ln endl
using namespace std;

void dfs(vector<vector<char>> &a,int i,int j,int n,int m)
{
if(i<0||j<0||i>=n||j>=m||a[i][j]=='#')
return;
a[i][j]='#';
dfs(a,i,j+1,n,m);
dfs(a,i+1,j,n,m);
dfs(a,i,j-1,n,m);
dfs(a,i-1,j,n,m);

}
int main()
{
int n,m;
cin>>n>>m;
vector<vector<char>> a(n);
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{char ch;
cin>>ch;a[i].push_back(ch);
}
}
int ans=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(a[i][j]=='.'){
ans++;
dfs(a,i,j,n,m);
}
}
}
cout<<ans;
}