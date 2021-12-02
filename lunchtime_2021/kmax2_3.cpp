#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)

void solve()
{
	ll n,k;
    cin>>n>>k;
    vector<ll> A(n);
    forn(i, n) cin>>A[i];
    ll ans = 0;
    ll mx = A[0];
    forn(i, n)
    {
        mx = max(mx, A[i]);
    }
    for(int i = k-1; i < n; i++)
    {
        if(A[i] == mx)
        {
            ans += n-i;
        }
    }
    cout<<ans<<endl;
}

int main()
{
	ll t=1;
	cin >> t;
    forn(i,t) {
    	solve();
    }
    return 0;
}