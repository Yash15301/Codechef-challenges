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
        ll answer=-1;
        cin >> n >> s;
        ll array[n+1];
        for(ll i=0; i<=n; i++)
        {
            array[i]=i;
        }
        for(ll i=1; i<=n; i++)
        {
            ll sum=0;
            ll from_left=1;
            ll from_right=n;
            while(from_left<i)
            {
                sum += array[from_left];
                from_left++;
                cout << i << " ";
                cout << "Computing from left-element: " << array[from_left] << " Sum: "<< sum<< endl;
            }
            while(from_right>i)
            {
                sum+=array[from_right];
                from_right--;
                cout << i << " ";
                cout << "Computing from right-element: " << array[from_right] << " Sum: "<< sum <<endl;
            }
            if(sum==s);
            {
                answer=i;
                break;
            }
        }
        cout << answer << endl;
        
    }
    return 0;
}