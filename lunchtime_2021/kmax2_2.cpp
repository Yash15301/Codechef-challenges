#include<bits/stdc++.h> 
#define ll long long 
using namespace std; 
int main()
{ 
    ll t,n,k,i; 
    cin>>t; 
    while(t--)
    { 
        cin>>n>>k; 
        k--; 
        vector<ll>v(n); 
        ll mx=INT_MIN; 
        map<ll,ll>mp; 
        for(i=0; i<n; i++)
        { 
            cin>>v[i]; 
            mx = max(mx, v[i]); 
        } 
        ll c=0; 
        for(i=0; i<n; i++)
        { 
            ll x = i+k; 
            if(x<n && v[x]==mx)
            { 
                c+=(n-x); 
            } 
        } 
        cout<<c<<"\n"; 
    } 
}