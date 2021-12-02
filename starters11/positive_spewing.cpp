#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(ll i=0; i<k; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(a[j]>0 && j!=n-1)
                {
                    a[j-1]=a[j-1]++;
                    a[j+1]=a[j+1]++;
                }
                else if(a[j]>0 && j==n-1)
                {
                    a[n-2]=a[n-2]++;
                    a[0]=a[0]++;
                }
            }
        }
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            sum+=a[i];
        }
        cout << sum << endl;
    }
    return 0;
}