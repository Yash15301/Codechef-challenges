#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        int count=0;
        cin >> n >> k;
        int a[n];
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        /*for(int i=0; i<n; i++)
        {
            cout << a[i] <<" ";
        }*/
        for(int i=0; i<k; i++)
        {
            if(a[i] < 0)
            {
                a[i] = a[i]*(-1);
            }
            else 
            {
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i] > 0)
            {
                sum+=a[i];
            }
        }
        cout <<sum << endl; 
    }
    return 0;
}