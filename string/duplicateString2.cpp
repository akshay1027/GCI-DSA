//Remove Duplicates

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define vi vector<int>
#define REP(i, n) for(int i=1; i<=n; i++)
using namespace std;

 

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s;
int n, i, j;
int ch[26] = {0};

 
cin>>s;


for(auto x : s)
{
 if(ch[x - 'a'] == 0)
 {
  cout<<x;
  ch[x - 'a']++;
 }
}

cout<<endl;
return 0;
}