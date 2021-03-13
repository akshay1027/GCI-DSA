#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    while(n--)
    {
        string x;
        ll l,r;
        cin >> x >> l >> r;
        sort(x.begin()+l,x.begin()+r+1,greater<ll>());
        cout << x << "\n";
    }
return 0;
}