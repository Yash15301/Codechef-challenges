#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n,s;
        cin >> n >> s;
        ll answer=-1;
        for(ll i=1; i<=n; i++)
        {
            ll sum=0;
            ll from_left=1;
            ll from_right=n;
            while(from_left<i)
            {
                sum=sum+from_left;
                from_left++;
            }
            while(from_right>i)
            {
                sum=sum+from_right;
                from_right--;
            }
            if(sum==s)
            {
                answer=i;
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}